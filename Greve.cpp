#include <string>
#include "Equipement.cpp"

using namespace std;

class Greve : public Equipement {
	public :
		Greve()
		{ 
			id_ = 5;
			libelle_ = "Grève";
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
