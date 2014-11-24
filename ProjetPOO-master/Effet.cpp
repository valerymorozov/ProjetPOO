#include <iostream>
#include <string>
#include "IAffichage.cpp"

using namespace std;

class Effet : public IAffichage {
	public :
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
		/*int getMaxStack(){ return maxStack_; }
		void setMaxStack(int mS){ maxStack_ = mS; }*/
		int getNbToursMax(){ return nbToursMax_; }
		void setNbToursMax(int n){ nbToursMax_ = n;}
		
		virtual void afficherInfo()
		{
			cout << libelle_ << "\n" << endl;
		}
	
	private :
		int id_, /*maxStack_, */nbToursMax_;
		string libelle_;
};
