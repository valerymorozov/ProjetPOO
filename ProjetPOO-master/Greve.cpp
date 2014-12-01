#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

#pragma once

/*!
* Classe Greve, hérite d'Equipement
*/

class Greve : public Equipement {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de la grève
		*/
		Greve()
		{ 
			id_ = 5;
			libelle_ = "Grève";
			valeurDefense_ = 30; 
		}
		/*!
		 * Accesseur à l'identifiant de la grève
		*/
		int getId(){ Equipement::getId(); }
		/*!
		 * Mutateur de l'identifiant de la grève
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
		 * Accesseur à la valeur de défense de la grève
		*/
		int getValDef(){ Equipement::getValDef(); }
		/*!
		 * Mutateur de la valeur de défense de la grève
		*/
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
