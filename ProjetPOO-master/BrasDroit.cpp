#include <string>
#include <iostream>
#include "Membre.cpp"

using namespace std;

#pragma once

/*!
* Classe BrasDroit, hérite de Membre
*/

class BrasDroit : public Membre {
	public :
		/*!
		* Constructeur explicite initialisant les variables du bras droit
		*/
		BrasDroit(){
			id_ = 1;
			pdv_ = 30;
			libelle_ = "Bras droit";
		};
		/*!
		 * Accesseur à l'identifiant du bras droit
		*/
		int getId(){ Membre::getId(); }
		/*!
		 * Mutateur de l'identifiant du bras droit
		*/
		void setId(int id) { Membre::setId(id); }
		/*!
		 * Accesseur au nombre de points de vie du bras droit
		*/
		int getPDV(){ Membre::getPDV(); }
		/*!
		 * Mutateur du nombre de points de vie du bras droit
		*/
		void setPDV(int p) { Membre::setPDV(p); }
		/*!
		 * Accesseur au libellé du membre
		*/
		string getLibelle(){ Membre::getLibelle(); }
		/*!
		 * Mutateur du libellé du membre
		*/
		void setLibelle(string l) { Membre::setLibelle(l); }
		/*!
		 * Accesseur à l'Equipement équipé au bras droit
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé au bras droit
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
