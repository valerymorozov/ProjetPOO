#include <string>
#include "Type.cpp"

using namespace std;

class Murmillo : public Type {
	public :
		Murmillo(){
				id_ = 3;
				libelle_ = "Murmillo";
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
};

