#include <iostream>
#include <string>
#include "IAffichage.cpp"

using namespace std;

class Type : public IAffichage {
	public :
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
		void afficherInfo()
		{
			cout << "Type : " << libelle_ << "\n" << endl;
		}
		
	private :
		int id_;
		string libelle_;
};
