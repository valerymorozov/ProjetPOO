#include <string>
#include "IAffichage.cpp"

using namespace std;

class Equipement : public IAffichage {
	public :
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
		int getValDef(){ return valeurDefense_; }
		void setValDef(int v) { valeurDefense_ = v; }
	private :
		int id_, valeurDefense_;
		string libelle_;
};
