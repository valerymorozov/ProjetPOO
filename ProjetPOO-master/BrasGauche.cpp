#include <string>
#include <iostream>
#include "Membre.cpp"

using namespace std;

#pragma once

/*!
* Classe BrasGauche, hérite de Membre
*/

class BrasGauche : public Membre {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du bras gauche
		*/
		BrasGauche(){
			id_ = 1;
			pdv_ = 30;
			libelle_ = "Bras gauche";
		};
		/*!
		 * Accesseur à l'identifiant du bras gauche
		*/
		int getId(){ Membre::getId(); }
		/*!
		 * Mutateur de l'identifiant du bras gauche
		*/
		void setId(int id) { Membre::setId(id); }
		/*!
		 * Accesseur au nombre de points de vie du bras gauche
		*/
		int getPDV(){ Membre::getPDV(); }
		/*!
		 * Mutateur du nombre de points de vie du bras gauche
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
		 * Accesseur à l'Equipement équipé au bras gauche
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé au bras gauche
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
