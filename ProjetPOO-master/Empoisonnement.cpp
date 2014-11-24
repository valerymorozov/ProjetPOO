#include <string>
#include <iostream>
#include "Effet.cpp"

using namespace std;

class Empoisonnement : public Effet {
	public :
		Empoisonnement(){
				id_ = 1;
				valeurDegats_ = 10;
				libelle_ = "Empoisonnement";
				nbToursMax_ = 3;
		};
		
		int getId(){ Effet::getId(); }
		void setId(int id) { Effet::setId(id); }
		string getLibelle(){ Effet::getLibelle(); }
		void setLibelle(string l) { Effet::setLibelle(l); }
		int getNbToursMax(){ Effet::getNbToursMax(); }
		void setNbToursMax(int n){ Effet::setNbToursMax(n); }
		int getValDeg(){ return valeurDegats_; }
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, nbToursMax_, valeurDegats_;
		string libelle_;
};
