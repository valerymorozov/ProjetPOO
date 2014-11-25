#include <iostream>
#include <string>
#include "IAffichage.hpp"

using namespace std;

#pragma once

class Type : public IAffichage {
	public :
		Type(){}
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
		virtual void afficherInfo()
		{
			cout << "Type : " << libelle_ << "\n" << endl;
		}
		
	private :
		int id_;
		string libelle_;
};
