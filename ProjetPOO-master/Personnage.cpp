#include <iostream>
#include <string>
#include "Type.cpp"
#include "Membre.cpp"
#include "Effet.cpp"
#include "BrasGauche.cpp"
#include "BrasDroit.cpp"
#include "JambeGauche.cpp"
#include "JambeDroite.cpp"
#include "Tete.cpp"
#include "Torse.cpp"
#include "Dimachaerus.cpp"
#include "Velite.cpp"
#include "Retiarius.cpp"
#include "Murmillo.cpp"
#include "Secutor.cpp"
#include "Thraex.cpp"
#include "IAffichage.hpp"

using namespace std;

/*
 * Format d'enregistrement d'un Personnage dans le fichier archivePersos.txt
 * idPerso, nomPerso, idType
 */

class Personnage : public IAffichage {
	public :
		Personnage(int id, string nom, int type){
			id_ = id;
			nom_ = nom;
			pdv_ = 333; //valeur arbitraire
			p_type = NULL;
			
			ajouterMembres();
			switch (type)//assignation du type
			{
				case 1:
					Dimachaerus* typeP = new Dimachaerus();
					p_type = typeP;
					break;
				case 2:
					Retiarius* typeP = new Retiarius();
					p_type = typeP;
					break;
				case 3:
					Murmillo* typeP = new Murmillo();
					p_type = typeP;
					break;
				case 4:
					Velite* typeP = new Velite();
					p_type = typeP;
					break;
				case 5:
					Thraex* typeP = new Thraex();
					p_type = typeP;
					break;
				case 6:
					Secutor* typeP = new Secutor();
					p_type = typeP;
					break;
			}
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		int getPDV(){ return pdv_; }
		void setPDV(int p){ pdv_ = p; }
		string getNom(){ return nom_; }
		void setNom(string l){ nom_ = l; }
		int getType(){ return type_; }
		void setType(int t){ type_ = t; }
		
		void ajouterMembres()
		{ 
			BrasGauche* p_brasG = new BrasGauche();
			BrasDroit* p_brasD = new BrasDroit();
			Tete* p_tete = new Tete();
			Torse* p_torse = new Torse();
			JambeGauche* p_jambeG = new JambeGauche();
			JambeDroite* p_jambeD = new JambeDroite();
			
			membres = {brasG, brasD, tete, torse, jambeG, jambeD};
		}
		
		void ajouterEffetActif()
		{
			
		}
		
		void afficherInfo()
		{
			cout << "Personnage " << nom_ << " :\n" << endl;
			p_type->afficherInfo();
			cout << "PDV restants : " << pdv_ << " :\n" << endl;
			if (membres[0]!=null)
			{
				brasG->afficherInfo();
				brasD->afficherInfo();
				tete->afficherInfo();
				torse->afficherInfo();
				jambeG->afficherInfo();
				jambeD->afficherInfo();
			}
			if (effetsActifs[0]!=null){
				cout << "Effet(s) actif(s) : " << "\n" << endl;
				for (int i = 0, i<3, ++i)
				{
					if(effetsActifs[i]!=null){
						effetsActifs[i]->afficherInfo();
					}
				}
			}
		}
		
		void porterCoup(int idPerso){
			
		}
		
		void prendreCoup(int idMembreVise){
			
		}
		
	private :
		int id_, pdv_;
		string nom_;
		Type* p_type;
		Membre* membres[6];
		Effet* effetsActifs[3];
};
