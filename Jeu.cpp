#include <iostream>
#include "IAffichage.cpp"
#include "Personnage.cpp"

using namespace std;

class Jeu {
	public :
		void creerPersonnage()
		{
			string nom;
			int numType;
			
			cout << "**************************" << endl;
			cout << "* Création de personnage *" << endl;
			cout << "**************************" << endl;
			cout << "\n" << endl;
			cout << "Entrez un nom de personnage : \n" << endl;
			cin >> nom;
			cout << "Sélectionnez un type de personnage : \n" << endl;
			cout << "1. Dimachaerus" << endl;
			cout << "2. Retiarius" << endl;
			cout << "3. Murmillo" << endl;
			cout << "4. Velite" << endl;
			cout << "5. Thraex" << endl;
			cout << "6. Secutor" << endl;
			cin >> numType;
		}
		
		void afficherInfo()
		{
			cout << "***************" << endl;
			cout << "* Personnages *" << endl;
			cout << "***************" << endl;
			cout << "\n" << endl;
			for (Personnage p : personnages)
			{
				p.afficherInfo();
				cout << "_______________" << endl;
			}
		}
		
		bool isJoueurCourant(Personnage perso)
		{
			if (perso.getId() == joueurCourant)
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
		int personnages[2];
		int joueurCourant_;
};
