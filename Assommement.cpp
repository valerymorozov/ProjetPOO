#include <string>
#include "Effet.cpp"

using namespace std;

class Assommement : public Effet {
	public :
		Assommement(){
				id_ = 4;
				libelle_ = "Assommement";
				maxStack_ = 1;
				nbToursMax_ = 1;
		};
		
		int getId(){ Effet::getId(); }
		void setId(int id) { Effet::setId(id); }
		string getLibelle(){ Effet::getLibelle(); }
		void setLibelle(string l) { Effet::setLibelle(l); }
		int getMaxStack(){ Effet::getMaxStack(); }
		void setMaxStack(int mS){ Effet::setMaxStack(mS); }
		int getNbToursMax(){ Effet::getNbToursMax(); }
		void setNbToursMax(int n){ Effet::setNbToursMax(n); }
	
	private :
		int id_, maxStack_, nbToursMax_;
		string libelle_;
};
