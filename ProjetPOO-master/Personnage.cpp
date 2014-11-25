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
		enum types {DIMACHAERUS = 1, RETIARIUS = 2, MURMILLO = 3, 
				VELITE = 4, THRAEX = 5, SECUTOR = 6};
		
		Personnage(int id, string nom, int type){
			id_ = id;
			nom_ = nom;
			pdv_ = 333; //valeur arbitraire
			p_type = NULL;
			
			ajouterMembres();
			switch (type)//assignation du type
			{
				case DIMACHAERUS:
				{
					Type* typeP = new Dimachaerus();
					p_type = typeP;
					break;
				}
				case RETIARIUS:
				{
					Type* typeP = new Retiarius();
					p_type = typeP;
					break;
				}
				case MURMILLO:
				{
					Type* typeP = new Murmillo();
					p_type = typeP;
					break;
				}
				case VELITE:
				{
					Type* typeP = new Velite();
					p_type = typeP;
					break;
				}
				case THRAEX:
				{
					Type* typeP = new Thraex();
					p_type = typeP;
					break;
				}
				case SECUTOR:
				{
					Type* typeP = new Secutor();
					p_type = typeP;
					break;
				}
			}
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		int getPDV(){ return pdv_; }
		void setPDV(int p){ pdv_ = p; }
		string getNom(){ return nom_; }
		void setNom(string l){ nom_ = l; }
		Type* getType(){ return p_type; }
		//void setType(Type* t){ p_type = t; }
		
		void ajouterMembres()
		{ 
			BrasGauche* p_brasG = new BrasGauche();
			BrasDroit* p_brasD = new BrasDroit();
			Tete* p_tete = new Tete();
			Torse* p_torse = new Torse();
			JambeGauche* p_jambeG = new JambeGauche();
			JambeDroite* p_jambeD = new JambeDroite();
			
			membres[0] = p_brasG;
			membres[1] = p_brasD;
			membres[2] = p_tete;
			membres[3] = p_torse;
			membres[4] = p_jambeG;
			membres[5] = p_jambeD;
		}
		
		void ajouterEffetActif()
		{
			
		}
		
		void afficherInfo()
		{
			cout << "Personnage " << nom_ << " :\n" << endl;
			p_type->afficherInfo();
			cout << "PDV restants : " << pdv_ << " :\n" << endl;
			if (membres[0]!=NULL)
			{
				membres[0]->afficherInfo();
				membres[1]->afficherInfo();
				membres[2]->afficherInfo();
				membres[3]->afficherInfo();
				membres[4]->afficherInfo();
				membres[5]->afficherInfo();
			}
			if (effetsActifs[0]!=NULL){
				cout << "Effet(s) actif(s) : " << "\n" << endl;
				int i = 0;
				for (i; i<3; ++i)
				{
					if(effetsActifs[i]!=NULL){
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
