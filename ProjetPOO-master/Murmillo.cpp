#include <string>
#include <iostream>
#include "Type.cpp"

using namespace std;

#pragma once

/*!
* Classe Murmillo, hérite de Type
*/

class Murmillo : public Type {
	public :
		/*!
		 * Constructeur explicite initialisant les variables du type
		*/
		Murmillo(){
				id_ = 3;
				libelle_ = "Murmillo";
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
		 * Mutateur du libellé du type
		*/
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

