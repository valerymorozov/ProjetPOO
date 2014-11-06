#include <string>
#include "Equipement.cpp"

using namespace std;

class Membre {
	public :
		Membre();
		
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		int getPDV(){ return pdv_; }
		void setPDV(int p) { pdv_ = p; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
		Equipement getEquip(){ return equip_; };
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
