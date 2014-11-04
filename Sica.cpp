using namespace std;

class Sica : public Arme {
	public :
		Sica(){
				id_ = 2;
				valeurDegats_ = 15;
				libelle_ = "Sica";
		};
		
		int getId(){ Arme::getId(); }
		void setId(int id) { Arme::setId(id); }
		string getLibelle(){ Arme::getLibelle(); }
		void setLibelle(string l) { Arme::setLibelle(l); }
		int getValDeg(){ return valeurDegats_; }
		void setValDeg(int v) { valeurDegats_ = v; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
};



