#include <string>
#include "Type.cpp"

using namespace std;

class Retiarius : public Type {
	public :
		Retiarius(){
				id_ = 2;
				libelle_ = "Retiarius";
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};
