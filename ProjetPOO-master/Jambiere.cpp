#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

#pragma once

/*!
* Classe Jambiere, hérite d'Equipement
*/

class Jambiere : public Equipement {
	public :
		/*!
		* Constructeur explicite initialisant les variables de la jambière
		*/
		Jambiere()
		{ 
			id_ = 4;
			libelle_ = "Jambière";
			valeurDefense_ = 30; 
		}
		/*!
		* Accesseur à l'identifiant de la jambière
		*/
		int getId(){ Equipement::getId(); }
		/*!
		* Mutateur de l'identifiant de la jambière
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
		* Accesseur à la valeur de défense de la jambière
		*/
		int getValDef(){ Equipement::getValDef(); }
		/*!
		* Mutateur de la valeur de défense de la jambière
		*/
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
