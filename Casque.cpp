using namespace std;

class Casque : public Equipement {
	public :
		Casque()
		{ 
			id = 2;
			libelle = "Casque";
			valeurDefense = 20; 
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
