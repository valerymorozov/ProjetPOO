#include <string>
#include <iostream>
#include "Membre.cpp"

using namespace std;

#pragma once

/*!
* Classe Torse, hérite de Membre
*/

class Torse : public Membre {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du torse
		*/
		Torse(){
			id_ = 1;
			pdv_ = 60;
			libelle_ = "Torse";
		};
		/*!
		 * Accesseur à l'identifiant du torse
		*/
		int getId(){ Membre::getId(); }
		/*!
		 * Mutateur de l'identifiant du torse
		*/
		void setId(int id) { Membre::setId(id); }
		/*!
		 * Accesseur au nombre de points de vie du torse
		*/
		int getPDV(){ Membre::getPDV(); }
		/*!
		 * Mutateur du nombre de points de vie du torse
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
		 * Accesseur à l'Equipement équipé au torse
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé au torse
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
