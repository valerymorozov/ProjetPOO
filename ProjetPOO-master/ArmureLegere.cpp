#include <string>
#include <iostream>
#include "Equipement.cpp"

using namespace std;

class ArmureLegere : public Equipement {
	public :
		ArmureLegere()
		{ 
			id_ = 3;
			libelle_ = "Armure légère";
			valeurDefense_ = 20; 
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
