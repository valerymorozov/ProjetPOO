#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

#pragma once

/*!
* Classe Casque, hérite d'Equipement
*/

class Casque : public Equipement {
	public :
		/*!
		 * Constructeur explicite initialisant les valeurs du casque
		*/
		Casque()
		{ 
			id_ = 2;
			libelle_ = "Casque";
			valeurDefense_ = 20; 
		}
		/*!
		 * Accesseur à l'identifiant du casque
		*/
		int getId(){ Equipement::getId(); }
		/*!
		 * Mutateur de l'identifiant du casque
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
		 * Accesseur à la valeur de défense du casque
		*/
		int getValDef(){ Equipement::getValDef(); }
		/*!
		 * Mutateur de la valeur de défense du casque
		*/
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
