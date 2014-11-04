using namespace std;

class Secutor : public Type {
	public :
		Secutor(){
				id_ = 6;
				libelle_ = "Secutor";
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l){ libelle_ = l; }
		
	private :
		int id_;
		string libelle_;
}

