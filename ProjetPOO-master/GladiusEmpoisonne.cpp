#include <string>
#include <iostream>
#include "Arme.cpp"
#include "Effet.cpp"

using namespace std;

class GladiusEmpoisonne : public Arme {
	public :
		GladiusEmpoisonne(){
				id_ = 3;
				valeurDegats_ = 20;
				libelle_ = "Gladius empoisonné";
				/*effet_ =  passer pointeur */ //empoisonnement
		}
		
		int getId(){ Arme::getId(); }
		void setId(int id) { Arme::setId(id); }
		string getLibelle(){ Arme::getLibelle(); }
		void setLibelle(string l) { Arme::setLibelle(l); }
		int getValDeg(){ return valeurDegats_; }
		void setValDeg(int v) { valeurDegats_ = v; }
		Effet getEffet(){ return effet_; }
		void setEffet(Effet e){ effet_ = e; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
		Effet effet_;
};


