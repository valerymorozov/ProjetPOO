#include <string>
#include "IAffichage.cpp"

using namespace std;

class Arme : public IAffichage{
	public :
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
	
	private :
		int id_;
		string libelle_;
};
