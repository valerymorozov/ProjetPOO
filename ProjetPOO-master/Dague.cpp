#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

#pragma once

/*!
* Classe Dague, hérite d'Arme
*/

class Dague : public Arme {
	public :
		/*!
		 * Constructeur explicite initialisant les variables de la dague
		*/
		Dague(){
				id_ = 1;
				valeurDegats_ = 10;
				libelle_ = "Dague";
		}
		/*!
		 * Accesseur à l'identifiant de la dague
		*/
		int getId(){ Arme::getId(); }
		/*!
		 * Mutateur de l'identifiant de la dague
		*/
		void setId(int id) { Arme::setId(id); }
		/*!
		 * Accesseur au libellé de l'arme
		*/
		string getLibelle(){ Arme::getLibelle(); }
		/*!
		 * Mutateur du libellé de l'arme
		*/
		void setLibelle(string l) { Arme::setLibelle(l); }
		/*!
		 * Accesseur à la valeur de dégâts de la dague
		*/
		int getValDeg(){ return valeurDegats_; }
		/*!
		 * Mutateur de la valeur de dégâts de la dague
		*/
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};


