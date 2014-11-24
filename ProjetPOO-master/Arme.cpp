#include <string>
#include <iostream>
#include "IAffichage.hpp"

using namespace std;

#pragma once

class Arme : public IAffichage{
	public :
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
		
		virtual void afficherInfo()
		{
			cout << "Nom arme : " << libelle_ << "\n" << endl;
		}
	
	private :
		int id_;
		string libelle_;
};
