#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

#pragma once

/*!
* Classe Sica, hérite d'Arme
*/

class Sica : public Arme {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du sica
		*/
		Sica(){
				id_ = 2;
				valeurDegats_ = 15;
				libelle_ = "Sica";
		}
		/*!
		 * Accesseur à l'identifiant du sica
		*/
		int getId(){ Arme::getId(); }
		/*!
		 * Mutateur de l'identifiant du sica
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
		 * Accesseur à la valeur de dégâts du sica
		*/
		int getValDeg(){ return valeurDegats_; }
		/*!
		 * Mutateur de la valeur de dégâts du sica
		*/
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};



