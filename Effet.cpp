using namespace std;

class Effet {
	public :
		Effet();
		
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
		int getMaxStack(){ return maxStack_; }
		void setMaxStack(int mS){ maxStack_ = mS; }
		int getNbToursMax(){ return nbToursMax_; }
		void setNbToursMax(int n){ nbToursMax_ = n;}
	
	private :
		int id_, maxStack_, nbToursMax_;
		string libelle_;
};
