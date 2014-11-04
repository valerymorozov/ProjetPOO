using namespace std;

class GladiusAiguise : public Arme {
	public :
		GladiusAiguise(){
				id_ = 3;
				valeurDegats_ = 20;
				libelle_ = "Gladius aiguisé";
				effet_ = /* passer pointeur */; //saignement
		};
		
		int getId(){ Arme::getId(); }
		void setId(int id) { Arme::setId(id); }
		string getLibelle(){ Arme::getLibelle(); }
		void setLibelle(string l) { Arme::setLibelle(l); }
		int getValDeg(){ return valeurDegats_; }
		void setValDeg(int v) { valeurDegats_ = v; }
		Effet getEffet(){ return effet_; }
		void setEffet(Effet e){ effet_ = e; }
	
	private :
		int id_, valeurDegats_;
		string libelle_;
		Effet effet_;
};



