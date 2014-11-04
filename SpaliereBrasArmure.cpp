using namespace std;

class SpaliereBrasArmure : public Equipement {
	public :
		SpaliereBrasArmure()
		{ 
			id = 1;
			libelle = "Spalière - Bras d'armure";
			valeurDefense = 30; 
		}
		
		int getId(){ Equipement::getId(); }
		void setId(int id) { Equipement::setId(id); }
		string getLibelle(){ Equipement::getLibelle(); }
		void setLibelle(string l) { Equipement::setLibelle(l); }
		int getValDef(){ Equipement::getValDef(); }
		void setValDef(int v) { Equipement::setValDef(v); }
		
	private :
		int id_, valeurDefense_;
		string libelle_;
}
