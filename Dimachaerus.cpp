#include <string>
#include "Type.cpp"

using namespace std;

class Dimachaerus : public Type {
	public :
		Dimachaerus(){
				id_ = 1;
				libelle_ = "Dimachaerus";
		}
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

