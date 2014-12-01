#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

#pragma once

/*!
* Classe Javelot, hérite d'Arme
*/

class Javelot : public Arme {
	public :
		/*!
		* Constructeur explicite initialisant les variables du javelot
		*/
		Javelot(){
				id_ = 5;
				valeurDegats_ = 40;
				libelle_ = "Javelot";
		}
		/*!
		* Accesseur à l'identifiant du javelot
		*/
		int getId(){ Arme::getId(); }
		/*!
		* Mutateur de l'identifiant du javelot
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
		* Accesseur à la valeur de dégâts du javelot
		*/
		int getValDeg(){ return valeurDegats_; }
		/*!
		* Mutateur de la valeur de dégâts du javelot
		*/
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};
