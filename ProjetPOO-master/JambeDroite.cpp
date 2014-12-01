#include <string>
#include <iostream>
#include "Membre.cpp"

using namespace std;

#pragma once

/*!
* Classe JambeDroite, hérite de Membre
*/

class JambeDroite : public Membre {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de la jambe droite
		*/
		JambeDroite(){
			id_ = 1;
			pdv_ = 30;
			libelle_ = "Jambe droite";
		};
		/*!
		 * Accesseur à l'identifiant de la jambe droite
		*/
		int getId(){ Membre::getId(); }
		/*!
		 * Mutateur à l'identifiant de la jambe droite
		*/
		void setId(int id) { Membre::setId(id); }
		/*!
		 * Accesseur au nombre de points de vie de la jambe droite
		*/
		int getPDV(){ Membre::getPDV(); }
		/*!
		 * Mutateur du nombre de points de vie de la jambe droite
		*/
		void setPDV(int p) { Membre::setPDV(p); }
		/*!
		 * Accesseur au libellé du membre
		*/
		int getLibelle(){ Membre::getLibelle(); }
		/*!
		 * Mutateur du libellé du membre
		*/
		void setLibelle(string l) { Membre::setLibelle(l); }
		/*!
		 * Accesseur à l'Equipement équipé à la jambe droite
		*/
		Equipement getEquip(){ return equip_; };
		/*!
		 * Mutateur de l'Equipement équipé à la jambe droite
		*/
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
