#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

#pragma once

/*!
* Classe Gladius, hérite d'Arme
*/

class Gladius : public Arme {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du gladius
		*/
		Gladius(){
				id_ = 3;
				valeurDegats_ = 20;
				libelle_ = "Gladius";
		}
		/*!
		 * Accesseur à l'identifiant du gladius
		*/
		int getId(){ Arme::getId(); }
		/*!
		 * Mutateur de l'identifiant du gladius
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
		 * Accesseur à la valeur de dégâts du gladius
		*/
		int getValDeg(){ return valeurDegats_; }
		/*!
		 * Mutateur de la valeur de dégâts du gladius
		*/
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};

