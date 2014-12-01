#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

#pragma once

/*!
* Classe Trident, hérite d'Arme
*/

class Trident : public Arme {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du trident
		*/
		Trident(){
				id_ = 4;
				valeurDegats_ = 30;
				libelle_ = "Trident";
		}
		/*!
		 * Accesseur à l'identifiant du trident
		*/
		int getId(){ Arme::getId(); }
		/*!
		 * Mutateur de l'identifiant du trident
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
		 * Accesseur à la valeur de dégâts du trident
		*/
		int getValDeg(){ return valeurDegats_; }
		/*!
		 * Mutateur de la valeur de dégâts du trident
		*/
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};
