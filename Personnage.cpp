#include <string>
#include "Type.cpp"

using namespace std;

class Personnage{
	public :
		Personnage();
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		string getNom(){ return nom_; }
		void setNom(string l){ nom_ = l; }
		/* passer le type */
		/* ajouter les membres */
		/* effetsActifs à 0, sujet à modification pdt la partie */
		
	private :
		int id_;
		string nom_;
		Type type_;
		int membres[];
		int effetsActifs[];
};
