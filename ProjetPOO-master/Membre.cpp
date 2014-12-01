#include <iostream>
#include <string>
#include "Equipement.cpp"
#include "IAffichage.hpp"

using namespace std;

#pragma once

/*!
* Classe mère Membre, tous les membres héritent de celle-ci
* Implémente l'interface IAffichage
*/

class Membre : public IAffichage {
	public :	
		/*!
		* Accesseur à l'identifiant du membre
		*/
		int getId(){ return id_; }
		/*!
		* Mutateur de l'identifiant du membre
		*/
		void setId(int id) { id_ = id; }
		/*!
		* Accesseur au nombre de points de vie du membre
		*/
		int getPDV(){ return pdv_; }
		/*!
		* Mutateur du nombre de points de vie du membre
		*/
		void setPDV(int p) { pdv_ = p; }
		/*!
		* Accesseur au libellé du membre
		*/
		string getLibelle(){ return libelle_; }
		/*!
		* Mutateur du libellé du membre
		*/
		void setLibelle(string l) { libelle_ = l; }
		/*!
		 * Accesseur à l'Equipement équipé au membre
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé au bras droit
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
		virtual void afficherInfo()
		{
			cout << libelle_ << " : " << " PDV restants : " << pdv_ << " Equipement : " << endl;
			equip_.afficherInfo();
			cout << "\n" << endl;
		}
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
