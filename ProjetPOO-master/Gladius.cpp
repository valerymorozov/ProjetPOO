#include <string>
#include <iostream>
#include "Arme.cpp"

using namespace std;

class Gladius : public Arme {
	public :
		Gladius(){
				id_ = 3;
				valeurDegats_ = 20;
				libelle_ = "Gladius";
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

