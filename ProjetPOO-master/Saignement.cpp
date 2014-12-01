#include <string>
#include <iostream>
#include "Effet.cpp"

using namespace std;

#pragma once

/*!
* Classe Saignement, hérite d'Effet
*/

class Saignement : public Effet {
	public :
		/*!
		* Constructeur explicite initialisant les variables de l'effet
		*/
		Saignement(){
				id_ = 2;
				valeurDegats_ = 10;
				libelle_ = "Saignement";
				nbToursMax_ = 3;
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
		 * Accesseur de la durée maximale, en tours, de l'effet
		*/
		int getNbToursMax(){ Effet::getNbToursMax(); }
		/*!
		 * Mutateur de la durée maximale, en tours, de l'effet
		*/
		void setNbToursMax(int n){ Effet::setNbToursMax(n); }
		/*!
		 * Accesseur à la valeur de dégâts de l'effet
		*/
		int getValDeg(){ return valeurDegats_; }
		/*!
		 * Mutateur de la valeur de dégâts de l'effet
		*/
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, nbToursMax_, valeurDegats_;
		string libelle_;
};
