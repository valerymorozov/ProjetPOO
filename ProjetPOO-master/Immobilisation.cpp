#include <string>
#include <iostream>
#include "Effet.cpp"

using namespace std;

#pragma once

class Immobilisation : public Effet {
	public :
		Immobilisation(){
				id_ = 3;
				libelle_ = "Immobilisation";
				nbToursMax_ = 1;
		};
		
		int getId(){ Effet::getId(); }
		void setId(int id) { Effet::setId(id); }
		string getLibelle(){ Effet::getLibelle(); }
		void setLibelle(string l) { Effet::setLibelle(l); }
		int getNbToursMax(){ Effet::getNbToursMax(); }
		void setNbToursMax(int n){ Effet::setNbToursMax(n); }
	
	private :
		int id_, nbToursMax_;
		string libelle_;
};
