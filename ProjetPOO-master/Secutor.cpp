#include <string>
#include <iostream>
#include "Type.cpp"

using namespace std;

#pragma once

/*!
* Classe Secutor, hérite de Type
*/

class Secutor : public Type {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du type
		*/
		Secutor(){
				id_ = 6;
				libelle_ = "Secutor";
		}
		/*!
		 * Accesseur à l'identifiant du type
		*/
		int getId(){ return id_; }
		/*!
		 * Mutateur de l'identifiant du type
		*/
		void setId(int id){ id_ = id; }
		/*!
		 * Accesseur au libellé du type
		*/
		string getLibelle(){ return libelle_; }
		/*!
		 * Mutateur du libellé du type
		*/
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

