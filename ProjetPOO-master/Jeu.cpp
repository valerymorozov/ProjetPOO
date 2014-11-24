#include <iostream>
#include <fstream>
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
			int valMenu;
			
			cout << "******************" << endl;
			cout << "* Menu principal *" << endl;
			cout << "******************" << endl;
			cout << "\n" << endl;
			cout << "1 - Combattre" << endl;
			cout << "2 - Créer un personnage" << endl;
			cout << "3 - Quitter" << endl;
			cout << "\n" << endl;
			
			cin >> valMenu;
			cout << "\n" << endl;
			
			switch (valMenu){
				case 1:
					commencerPartie();
					break;
				case 2:
					creerPersonnage();
					break;
				case 3:
					exit(EXIT_SUCCESS);
					break;
				default:
			}
		}
		
		void creerPersonnage()
		{
			string nomPerso;
			int numType;
			
			//choix des nom/type du nouveau perso à créer
			cout << "**************************" << endl;
			cout << "* Création de personnage *" << endl;
			cout << "**************************\n" << endl;
			cout << "Entrez un nom de personnage (chaîne de caractères) : \n" << endl;
			cin >> nom;
			cout << "\n" << endl;
			cout << "Sélectionnez un type de personnage : \n" << endl;
			cout << "1 - Dimachaerus" << endl;
			cout << "2 - Retiarius" << endl;
			cout << "3 - Murmillo" << endl;
			cout << "4 - Velite" << endl;
			cout << "5 - Thraex" << endl;
			cout << "6 - Secutor\n" << endl;
			cin >> numType;
			
			//enregistrement du Personnage créé dans le fichier
			enregistrerNouveauPerso((lastIdPerso_+1), nom, numType);
			
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

			for (Personnage p : personnages)
			{
				p.afficherInfo();
				cout << "_______________" << endl;
			}
		}
		
		void commencerPartie()
		{
			cout << "*****************************" << endl;
			cout << "* Sélection des personnages *" << endl;
			cout << "*****************************\n" << endl;
			
			
			int j1;
			
			cout << "<Que les Dieux soient avec vous Gladiateurs ! La gloire ou la mort !>" << endl;
			cout << "<Quel joueur commence ?>\n" << endl;
			cin << j1 << endl;
			
			switch (j1){
				case 1:
					this.setJoueurCourant(personnages[0].getId());
					cout << "[J1 commence]" << endl;
					break;
				case 2:
					this.setJoueurCourant(personnages[1].getId());
					cout << "[J1 commence]" << endl;
					break;
				default:
					this.setJoueurCourant(personnages[0].getId());
					cout << "[J1 commence]" << endl;
					break;
			}
		}
		
		bool isJoueurCourant(int idPerso)
		{
			if (idPerso == joueurCourant)
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
		//****** MAIN ******
		int main(){
			afficherMenuPrincipal();
		}
		
	private :
		Personnage *personnages[2]; //les 2 Personnages de la partie
		int joueurCourant_, lastIdPerso_; //id du Personnage en train de jouer, id du dernier Personnage créé
};
