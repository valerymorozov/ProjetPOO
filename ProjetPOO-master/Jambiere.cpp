#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

#pragma once

class Jambiere : public Equipement {
	public :
		Jambiere()
		{ 
			id_ = 4;
			libelle_ = "Jambière";
			valeurDefense_ = 30; 
		}
		
		int getId(){ Equipement::getId(); }
		void setId(int id) { Equipement::setId(id); }
		string getLibelle(){ Equipement::getLibelle(); }
		void setLibelle(string l) { Equipement::setLibelle(l); }
		int getValDef(){ Equipement::getValDef(); }
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
