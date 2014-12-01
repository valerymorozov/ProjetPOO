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
#include "Immobilisation.cpp"
#include "Saignement.cpp"
#include "Empoisonnement.cpp"
#include "IAffichage.hpp"
#include <cstdlib>

using namespace std;

/*
 * Format d'enregistrement d'un Personnage dans le fichier archivePersos.txt
 * idPerso, nomPerso, idType
 */
 
/*!
* Classe Personnage
* Implémente l'interface IAffichage
*/

class Personnage : public IAffichage 
{
	public :
		enum types {DIMACHAERUS = 1, RETIARIUS = 2, MURMILLO = 3, 
				VELITE = 4, THRAEX = 5, SECUTOR = 6};
		enum etats {POISON = 1, BLEED = 2, ROOT = 3};
		
		/*!
		 * Constructeur explicite construisant un personnage
		 * en fonction des paramètres passés
		*/
		Personnage(int id, string nom, int type)
		{
			id_ = id;
			nom_ = nom;
			pdv_ = 333; //valeur arbitraire
			p_type = NULL;
			indexLastEffet_ = 0;
			
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
		
		/*!
		 * Accesseur à l'identifiant du personnage
		*/
		int getId(){ return id_; }
		/*!
		 * Mutateur de l'identifiant du personnage
		*/
		void setId(int id){ id_ = id; }
		/*!
		 * Accesseur au nombre de points de vie totaux du personnage
		*/
		int getPDV(){ return pdv_; }
		/*!
		 * Mutateur du nombre de points de vie totaux du personnage
		*/
		void setPDV(int p){ pdv_ = p; }
		/*!
		 * Accesseur au nom du personnage
		*/
		string getNom(){ return nom_; }
		/*!
		 * Mutateur du nom du personnage
		*/
		void setNom(string l){ nom_ = l; }
		/*!
		 * Accesseur au type du personnage
		*/
		Type* getType(){ return p_type; }
		/*!
		 * Accesseur à l'index du dernier effet ajouté à effetsActifs
		*/
		int getIndexLastEffet(){ return indexLastEffet_; }
		/*!
		 * Mutateur de l'index du dernier effet ajouté à effetsActifs
		*/
		void setIndexLastEffet(int e)
		{ 
			/* Tableau de correspondance
			 * 
			 * indexLastEffet_     |   0   |1|2|3|
			 * 					   ----V----V-V-V-
			 * indice effetsActifs |tableau|0|1|2|
			 * 						 vide
			 * 						  ou
			 * 						 plein
			 */
			if(e != 0 && e <= 3)
			{
				indexLastEffet_ = e;
			} 
		}
		
		/*!
		 * Procédure pour créer et ajouter les membres au personnage
		*/
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
		
		/*!
		 * Procédure pour ajouter un effet actif dans effetsActifs
		*/
		void ajouterEffetActif(int effet)
		{
			Effet* p_effet;
			switch (effet)
			{
				case POISON:
				{
					p_effet = new Empoisonnement();
					if(indexLastEffet_ == 0)
					{
						effetsActifs[0] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 1)
					{
						effetsActifs[1] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 2)
					{
						effetsActifs[2] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 3)
					{
						effetsActifs[0] = p_effet;
						indexLastEffet_ = 0;
					}
					break;
				}
				case BLEED:
				{
					p_effet = new Saignement();
					if(indexLastEffet_ == 0)
					{
						effetsActifs[0] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 1)
					{
						effetsActifs[1] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 2)
					{
						effetsActifs[2] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 3)
					{
						effetsActifs[0] = p_effet;
						indexLastEffet_ = 0;
					}
					break;
				}
				case ROOT:
				{
					p_effet = new Immobilisation();
					if(indexLastEffet_ == 0)
					{
						effetsActifs[0] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 1)
					{
						effetsActifs[1] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 2)
					{
						effetsActifs[2] = p_effet;
						++indexLastEffet_;
					} else if(indexLastEffet_ == 3)
					{
						effetsActifs[0] = p_effet;
						indexLastEffet_ = 0;
					}
					break;
				}
			}
		}
		
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
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
		
		/*!
		 * Procédure de calcul des dégâts reçus suite à un coup
		 * sur le membre passé en paramètre
		*/
		void prendreCoup(int idMembreVise){
			//if(this->membres[0].getId()==
		}
		
	private :
		int id_, pdv_, indexLastEffet_;
		string nom_;
		Type* p_type;
		Personnage* p_ennemi;
		Membre* membres[6];
		Effet* effetsActifs[3];//queue FIFO d'effets actifs 
};
