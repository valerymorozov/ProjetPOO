#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

#pragma once

/*!
 * Classe ArmureLegere, hérite d'Equipement
 */

class ArmureLegere : public Equipement {
	public :
		/*!
		* Constructeur explicite initialisant les variables de l'armure
		*/
		ArmureLegere()
		{ 
			id_ = 3;
			libelle_ = "Armure légère";
			valeurDefense_ = 20; 
		}
		/*!
		 * Accesseur à l'identifiant de l'armure
		*/
		int getId(){ Equipement::getId(); }
		/*!
		 * Mutateur de l'identifiant de l'armure
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
		 * Accesseur à la valeur de défense de l'armure
		*/
		int getValDef(){ Equipement::getValDef(); }
		/*!
		 * Mutateur de la valeur de défense de l'armure
		*/
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
