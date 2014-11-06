#include <string>
#include "Type.cpp"

using namespace std;

class Thraex : public Type {
	public :
		Thraex(){
				id_ = 5;
				libelle_ = "Thraex";
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

