#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

#pragma once

/*!
* Classe SpaliereBrasArmure, hérite d'Equipement
*/

class SpaliereBrasArmure : public Equipement {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de la spaulière/bras d'armure
		*/
		SpaliereBrasArmure()
		{ 
			id_ = 1;
			libelle_ = "Spalière - Bras d'armure";
			valeurDefense_ = 30; 
		}
		/*!
		 * Accesseur à l'identifiant de la spalière/bras d'armure
		*/
		int getId(){ Equipement::getId(); }
		/*!
		 * Mutateur de l'identifiant de la spalière/bras d'armure
		*/
		void setId(int id) { Equipement::setId(id); }
		/*!
		 * Accesseur au libellé de l'équipement
		*/
		string getLibelle(){ Equipement::getLibelle(); }
		/*!
		 * Mutateur du libellé de l'équipement
		*/
		void setLibelle(string l) { Equipement::setLibelle(l); }
		/*!
		 * Accesseur à la valeur de défense de la spalière/bras d'armure
		*/
		int getValDef(){ Equipement::getValDef(); }
		/*!
		 * Mutateur de la valeur de défense de la spalière/bras d'armure
		*/
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
