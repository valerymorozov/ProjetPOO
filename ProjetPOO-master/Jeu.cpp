#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include "IAffichage.hpp"
#include "Personnage.cpp"

using namespace std;

/*!
* Classe Jeu
* Implémente l'interface IAffichage
*/

class Jeu : public IAffichage {
	public :
		enum types {DIMACHAERUS = 1, RETIARIUS = 2, MURMILLO = 3, 
				VELITE = 4, THRAEX = 5, SECUTOR = 6};
		
		/*!
		 * Constructeur explicite récupérant le dernier identifiant
		 * de personnage en cours
		*/
		Jeu()
		{
			//màj le dernier idPerso courant
			recupLastId();
		}
		
		/*!
		 * Procédure de récupération du dernier identifiant de personnage
		 * en cours à partir du fichier lastIdPerso.txt
		*/
		void recupLastId(){
			ifstream fichier;
			fichier.open("lastIdPerso.txt");
			if (fichier.is_open()) {
				while (!fichier.eof()) {
					fichier >> lastIdPerso_;
				}
			} else {
				cout << "Impossible d'ouvrir le fichier pour lire!" << endl;
			}
			fichier.close();
		}
		
		/*!
		 * Procédure de mise à jour du dernier identifiant de personnage
		 * en cours dans le fichier lastIdPerso.txt
		*/
		void majLastId(int i){
			ofstream fichier;
			fichier.open("lastIdPerso.txt");
			if (fichier.is_open()) {
				fichier << i << endl;
			} else {
				cout << "Impossible d'ouvrir le fichier pour écrire!" << endl;
			}
			fichier.close();
		}
		
		//recupère les données à partir du fichier et crée les persos
		void recupPerso(){
			
		}
		
		/*!
		 * Procédure d'affichage du menu principal
		*/
		void afficherMenuPrincipal()
		{
			string vM;
			int valMenu;
			
			cout << "\n******************" << endl;
			cout << "* Menu principal *" << endl;
			cout << "******************\n" << endl;
			cout << "1 - Combattre" << endl;
			cout << "2 - Créer un personnage" << endl;
			cout << "3 - Quitter" << endl;
			
			getline(cin, vM);
			valMenu = atoi(vM.c_str());
			cout << "\n" << endl;
			
			switch (valMenu){
				case 1:
				{
					commencerPartie();
					break;
				}
				case 2:
				{
					creerPersonnage();
					break;
				}
				case 3:
				{
					cout << "A la prochaine tentative d'évasion, 300 coups de fouets esclave!\n" << endl;
					exit(0);
					break;
				}
				default:
				{
					commencerPartie();
					break;
				}
			}
		}
		
		/*!
		 * Procédure de création de nouveau personnage
		*/
		void creerPersonnage()
		{
			string nomPerso, nT;
			int numType;
			
			//choix des nom/type du nouveau perso à créer
			cout << "\n**************************" << endl;
			cout << "* Création de personnage *" << endl;
			cout << "**************************\n" << endl;
			cout << "Entrez un nom de personnage (chaîne de caractères) : \n" << endl;
			getline(cin, nomPerso);
			cout << "\nSélectionnez un type de personnage : \n" << endl;
			cout << "1 - Dimachaerus\nEquipé de 2 Gladius(épée courte).\nBénéficie d'une bonne protection." << endl;
			cout << "2 - Retiarius\nEquipé d'un Trident et d'un Filet, lui permettant d'immobiliser l'ennemi.\nBénéficie d'une protection légère." << endl;
			cout << "3 - Murmillo\nEquipé d'un Gladius et d'un bouclier ovale Oblong lui permettant de\nbloquer des coups portés par l'adversaire.\nBénéficie d'une protection moyenne." << endl;
			cout << "4 - Velite\nEquipé d'un Javelot à 2 mains.\nBénéficie d'une protection moyenne." << endl;
			cout << "5 - Thraex\nEquipé d'une Sica(épée courte courbée) et d'un bouclier rond Parmula\n lui permettant de bloquer des coups portés par l'adversaire.\nBénéficie d'une protection moyenne." << endl;
			cout << "6 - Secutor\nEquipé de 2 Dagues.\nBénéficie d'une bonne protection." << endl;
			getline(cin, nT);
			numType = atoi(nT.c_str());
			cout << "\nBienvenue dans l'arène combattant " << nomPerso << " !\n" << endl;
			
			//enregistrement du Personnage créé dans le fichier
			enregistrerNouveauPerso((lastIdPerso_+1), nomPerso, numType);
			
			//mise à jour du dernier idPerso
			majLastId(lastIdPerso_+1);
			lastIdPerso_ += 1;//persistance de lastIdPerso_
			
			afficherMenuPrincipal();//réaffichage du menu principal
		}
		
		/*!
		 * Procédure d'enregistrement du personnage nouvellement créé
		 * dans le fichier archivePersos.txt
		*/
		void enregistrerNouveauPerso(int id, string nom, int type){
			ofstream fichier;
			fichier.open("archivePersos.txt", ofstream::app);
			if (fichier.is_open()) {
					fichier << id << ";" << nom << ";" << type << endl;
					fichier.close();
				
			} else {
				cout << "Impossible d'ouvrir le fichier pour écrire!" << endl;
			}
		}
		
		void chargementPersos(){
				
		}
		
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
		void afficherInfo()
		{
			cout << "\n***************" << endl;
			cout << "* Personnages *" << endl;
			cout << "***************\n" << endl;
			
			int i = 0;
			for (i; i<6; ++i)
			{
				personnages[i]->afficherInfo();
				cout << "_______________" << endl;
			}
		}
		
		/*!
		 * Procédure de lancement de la partie:
		 * -# Séléction des personnages
		 * -# Sélection du personnage ayant la main
		 * -# Début du combat
		*/
		void commencerPartie()
		{
			cout << "******************************" << endl;
			cout << "* Sélection du personnage J1 *" << endl;
			cout << "******************************\n" << endl;
			
			//lecture du fichier Persos & affichage des Persos dispo
			ifstream fichier;
			string entrees[3];
			int cptNbPersos = 0;
			
			fichier.open("archivePersos.txt");
			if (fichier.is_open()) {
				while (!fichier.eof()) {
					string ligne;
					getline(fichier, ligne);
					stringstream ss(ligne);
					string champ;
					for(int i = 0;i<3;++i)
					{
						getline(ss,champ,';');
						entrees[i] = champ;
					}
					if(entrees[0]!="\0")
					{	
						//int s = stoi(entrees[3]); //C++11
						int s = atoi(entrees[3].c_str());
						switch(s)
						{
							case DIMACHAERUS:
							{
								cout << entrees[0] << " - " << entrees[1] << " : Dimachaerus" << endl;
								++cptNbPersos;
								break;
							}
							case RETIARIUS:
							{
								cout << entrees[0] << " - " << entrees[1] << " : Retiarius" << endl;
								++cptNbPersos;
								break;
							}
							case MURMILLO:
							{
								cout << entrees[0] << " - " << entrees[1] << " : Murmillo" << entrees[2] << endl;
								++cptNbPersos;
								break;
							}
							case VELITE:
							{
								cout << entrees[0] << " - " << entrees[1] << " : Velite" << entrees[2] << endl;
								++cptNbPersos;
								break;
							}
							case THRAEX:
							{
								cout << entrees[0] << " - " << entrees[1] << " : Thraex" << entrees[2] << endl;
								++cptNbPersos;
								break;
							}
							case SECUTOR:
							{
								cout << entrees[0] << " - " << entrees[1] << " : Secutor" << entrees[2] << endl;
								++cptNbPersos;
								break;
							}
						}
					}
				}
			} else {
				cout << "Impossible d'ouvrir le fichier pour lire!" << endl;
			}
			fichier.close();
			cout << "\n" << endl;
			/*
			string sM;
			int selecMenu;
			
			getline(cin, sM);
			selecMenu = atoi(sM.c_str());

			if(selecMenu<=cptNbPersos)
			{
				int typeP;
				typeP = atoi(entrees[2]);
				Personnage* j1 = new Personnage(selecMenu, entrees[1], typeP);
				personnages[0] = j1;
			}
			
			cptNbPersos = 0;
			
			cout << "******************************" << endl;
			cout << "* Sélection du personnage J2 *" << endl;
			cout << "******************************\n" << endl;
			
			fichier.open("archivePersos.txt");
			if (fichier.is_open()) {
				while (!fichier.eof()) {
					fichier.getline(entrees, 256, ';');
					cout << entrees[0] << " - " << entrees[1] << " : " << entrees[2] << endl;
					++cptNbPersos;
				}
			} else {
				cout << "Impossible d'ouvrir le fichier pour lire!" << endl;
			}
			fichier.close();
			cout << "\n" << endl;
			
			getline(cin, sM);
			selecMenu = atoi(sM.c_str());
			
			if(selecMenu<=cptNbPersos)
			{
				int typeP;
				typeP = atoi(entrees[2].c_str());
				Personnage* j2 = new Personnage(selecMenu, entrees[1], typeP);
				personnages[1] = j2;
			}
			*/
			string j;
			int joueur;
			
			cout << "<Que les Dieux soient avec vous Gladiateurs ! La gloire ou la mort !>" << endl;
			cout << "<Quel joueur commence ?>\n" << endl;
			getline(cin, j);
			joueur = atoi(j.c_str());
			
			switch (joueur){
				case 1:
				{
					this->setJoueurCourant(personnages[0]->getId());
					cout << "[J1 commence]" << endl;
					break;
				}
				case 2:
				{
					this->setJoueurCourant(personnages[1]->getId());
					cout << "[J2 commence]" << endl;
					break;
				}
				default:
				{
					this->setJoueurCourant(personnages[0]->getId());
					cout << "[J1 commence]" << endl;
					break;
				}
			}
		}
		
		/*!
		 * Fonction retournant si le joueur passé en paramètre est
		 * le joueur ayant la main
		*/
		bool isJoueurCourant(int idPerso)
		{
			if (idPerso == joueurCourant_)
			{
				return true;
			} else {
				return false;
			}	
		}
		/*!
		 * Fonction retournant l'identifiant du joueur ayant la main
		*/
		int getJoueurCourant()
		{
			return joueurCourant_;
		}
		
		/*!
		 * Mutateur du joueur courant
		*/
		void setJoueurCourant(int i)
		{
			joueurCourant_ = i;
		}
		
		/*!
		 * Procédure d'invocation de prendreCoup() en fonction
		 * des paramètres passés
		*/
		void porterCoup(int idPerso, int idMembre){
			int i = 0;
			for(i; i<2; ++i)
			{
				if(personnages[i]->getId()==idPerso)
				{
					personnages[i]->prendreCoup(idMembre);
				}
			}
		}
		
	private :
		Personnage *personnages[2]; //les 2 Personnages de la partie
		int joueurCourant_, lastIdPerso_; //id du Personnage en train de jouer, id du dernier Personnage créé
};

/*!
* Méthode MAIN
*/
/* *****************
 ****** MAIN *******
 ***************** */
int main(){
	Jeu* jeu = new Jeu();
	jeu->afficherMenuPrincipal();
}
