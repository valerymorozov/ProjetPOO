#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

class Dague : public Arme {
	public :
		Dague(){
				id_ = 1;
				valeurDegats_ = 10;
				libelle_ = "Dague";
		}
		
		int getId(){ Arme::getId(); }
		void setId(int id) { Arme::setId(id); }
		string getLibelle(){ Arme::getLibelle(); }
		void setLibelle(string l) { Arme::setLibelle(l); }
		int getValDeg(){ return valeurDegats_; }
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};


