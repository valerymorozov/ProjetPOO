#include <string>
#include <iostream>
#include "Membre.cpp"

using namespace std;

#pragma once

/*!
* Classe Tete, hérite de Membre
*/

class Tete : public Membre {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de la tête
		*/
		Tete(){
			id_ = 1;
			pdv_ = 30;
			libelle_ = "Tête";
		};
		/*!
		 * Accesseur à l'identifiant de la tête
		*/
		int getId(){ Membre::getId(); }
		/*!
		 * Mutateur de l'identifiant de la tête
		*/
		void setId(int id) { Membre::setId(id); }
		/*!
		 * Accesseur au nombre de points de vie de la tête
		*/
		int getPDV(){ Membre::getPDV(); }
		/*!
		 * Mutateur du nombre de points de vie de la tête
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
		 * Accesseur à l'Equipement équipé à la tête
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé à la tête
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
