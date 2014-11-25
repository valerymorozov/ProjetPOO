#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include "IAffichage.hpp"
#include "Personnage.cpp"

using namespace std;

class Jeu : public IAffichage {
	public :
		Jeu()
		{
			//màj le dernier idPerso courant
			recupLastId();
		}
		
		//récupère le dernier idPerso courant à partir du fichier
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
		
		//met à jour le dernier idPerso courant dans le fichier
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
		
		void afficherMenuPrincipal()
		{
			string vM;
			int valMenu;
			
			cout << "******************" << endl;
			cout << "* Menu principal *" << endl;
			cout << "******************" << endl;
			cout << "\n" << endl;
			cout << "1 - Combattre" << endl;
			cout << "2 - Créer un personnage" << endl;
			cout << "3 - Quitter" << endl;
			cout << "\n" << endl;
			
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
					exit(0);
					cout << "Programme quitté avec succès." << endl;
					break;
				}
				default:
				{
					commencerPartie();
					break;
				}
			}
		}
		
		void creerPersonnage()
		{
			string nomPerso, nT;
			int numType;
			
			//choix des nom/type du nouveau perso à créer
			cout << "**************************" << endl;
			cout << "* Création de personnage *" << endl;
			cout << "**************************\n" << endl;
			cout << "Entrez un nom de personnage (chaîne de caractères) : \n" << endl;
			getline(cin, nomPerso);
			cout << "\n" << endl;
			cout << "Sélectionnez un type de personnage : \n" << endl;
			cout << "1 - Dimachaerus" << endl;
			cout << "2 - Retiarius" << endl;
			cout << "3 - Murmillo" << endl;
			cout << "4 - Velite" << endl;
			cout << "5 - Thraex" << endl;
			cout << "6 - Secutor\n" << endl;
			getline(cin, nT);
			numType = atoi(nT.c_str());
			
			//enregistrement du Personnage créé dans le fichier
			enregistrerNouveauPerso((lastIdPerso_+1), nomPerso, numType);
			
			//mise à jour du dernier idPerso
			majLastId(lastIdPerso_+1);
			lastIdPerso_ += 1;
		}
		
		void enregistrerNouveauPerso(int id, string nom, int type){
			ofstream fichier;
			fichier.open("archivePersos.txt");
			if (fichier.is_open()) {
				while (!fichier.eof()) {
					fichier << id << ";" << nom << ";" << type << endl;
				}
			} else {
				cout << "Impossible d'ouvrir le fichier pour écrire!" << endl;
			}
			fichier.close();
		}
		
		void afficherInfo()
		{
			cout << "***************" << endl;
			cout << "* Personnages *" << endl;
			cout << "***************\n" << endl;
			
			int i = 0;
			for (i; i<6; ++i)
			{
				personnages[i]->afficherInfo();
				cout << "_______________" << endl;
			}
		}
		
		void commencerPartie()
		{
			cout << "*****************************" << endl;
			cout << "* Sélection des personnages *" << endl;
			cout << "*****************************\n" << endl;
			
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
		
		bool isJoueurCourant(int idPerso)
		{
			if (idPerso == joueurCourant_)
			{
				return true;
			} else {
				return false;
			}	
		}
		
		int getJoueurCourant()
		{
			return joueurCourant_;
		}
		
		void setJoueurCourant(int i)
		{
			joueurCourant_ = i;
		}
		
	private :
		Personnage *personnages[2]; //les 2 Personnages de la partie
		int joueurCourant_, lastIdPerso_; //id du Personnage en train de jouer, id du dernier Personnage créé
};

//****** MAIN ******
int main(){
	Jeu* jeu = new Jeu();
	jeu->afficherMenuPrincipal();
}
