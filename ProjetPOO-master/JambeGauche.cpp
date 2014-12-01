#include <string>
#include <iostream>
#include "Membre.cpp"

using namespace std;

#pragma once

/*!
* Classe JambeGauche, hérite de Membre
*/

class JambeGauche : public Membre {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de la jambe gauche
		*/
		JambeGauche(){
			id_ = 1;
			pdv_ = 30;
			libelle_ = "Jambe gauche";
		};
		/*!
		 * Accesseur à l'identifiant de la jambe gauche
		*/
		int getId(){ Membre::getId(); }
		/*!
		 * Mutateur de l'identifiant de la jambe gauche
		*/
		void setId(int id) { Membre::setId(id); }
		/*!
		 * Accesseur au nombre de points de vie de la jambe gauche
		*/
		int getPDV(){ Membre::getPDV(); }
		/*!
		 * Mutateur du nombre de points de vie de la jambe gauche
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
		 * Accesseur à l'Equipement équipé à la jambe gauche
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé à la jambe gauche
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
