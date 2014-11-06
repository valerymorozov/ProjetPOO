#include <string>
#include "Arme.cpp"

using namespace std;

class Trident : public Arme {
	public :
		Trident(){
				id_ = 4;
				valeurDegats_ = 30;
				libelle_ = "Trident";
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
