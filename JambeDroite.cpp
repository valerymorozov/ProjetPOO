#include <string>
#include "Membre.cpp"

using namespace std;

class JambeDroite : public Membre {
	public :
		JambeDroite(){
			id_ = 1;
			pdv_ = 30;
			libelle_ = "Jambe droite";
		};
		
		int getId(){ Membre::getId(); }
		void setId(int id) { Membre::setId(id); }
		int getPDV(){ Membre::getPDV(); }
		void setPDV(int p) { Membre::setPDV(p); }
		int getLibelle(){ Membre::getLibelle(); }
		void setLibelle(string l) { Membre::setLibelle(l); }
		Equipement getEquip(){ return equip_; };
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
