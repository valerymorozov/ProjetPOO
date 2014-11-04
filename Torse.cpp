using namespace std;

class Torse : public Membre {
	public :
		Torse(){
			id_ = 1;
			pdv_ = 60;
			libelle_ = "Torse";
		};
		
		int getId(){ Membre::getId(); }
		void setId(int id) { Membre::setId(id); }
		int getPDV(){ Membre::getPDV(); }
		void setPDV(int p) { Membre::setPDV(p); }
		string getLibelle(){ Membre::getLibelle(); }
		void setLibelle(string l) { Membre::setLibelle(l); }
		Equipement getEquip(){ return equip_; };
		Equipement setEquip(Equipement e){ equip_ = e; };
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
}
