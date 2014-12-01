#include <string>
#include <iostream>
#include "Type.cpp"

using namespace std;

#pragma once

/*!
* Classe Velite, hérite de Type
*/

class Velite : public Type {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du type
		*/
		Velite(){
				id_ = 4;
				libelle_ = "Velite";
		};
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
		 * Mutateur du l'identifiant du type
		*/
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

