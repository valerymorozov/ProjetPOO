#include <string>
#include "Type.cpp"

using namespace std;

class Velite : public Type {
	public :
		Velite(){
				id_ = 4;
				libelle_ = "Velite";
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

