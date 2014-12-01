#include <string>
#include <iostream>
#include "Effet.cpp"

using namespace std;

#pragma once

/*!
* Classe Immobilisation, hérite d'Effet
*/

class Immobilisation : public Effet {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de l'effet
		*/
		Immobilisation(){
				id_ = 3;
				libelle_ = "Immobilisation";
				nbToursMax_ = 1;
		};
		/*!
		 * Accesseur à l'identifiant de l'effet
		*/
		int getId(){ Effet::getId(); }
		/*!
		 * Mutateur de l'identifiant de l'effet
		*/
		void setId(int id) { Effet::setId(id); }
		/*!
		 * Accesseur au libellé de l'effet
		*/
		string getLibelle(){ Effet::getLibelle(); }
		/*!
		 * Mutateur du libellé de l'effet
		*/
		void setLibelle(string l) { Effet::setLibelle(l); }
		/*!
		 * Accesseur à la durée maximale, en tours, de l'effet
		*/
		int getNbToursMax(){ Effet::getNbToursMax(); }
		/*!
		 * Mutateur de la durée maximale, en tours, de l'effet
		*/
		void setNbToursMax(int n){ Effet::setNbToursMax(n); }
	
	private :
		int id_, nbToursMax_;
		string libelle_;
};
