#include <string>
#include "Type.cpp"

using namespace std;

class Personnage{
	public :
		Personnage();
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		int getPDV(){ return pdv_; }
		void setPDV(int p){ pdv_ = p; }
		string getNom(){ return nom_; }
		void setNom(string l){ nom_ = l; }
		type_ = /* passer le type */
		void ajouterMembres(){ }
		/* effetsActifs à 0, sujet à modification pdt la partie */
		
	private :
		int id_, pdv_;
		string nom_;
		Type* type_;
		int membres[];
		int effetsActifs[];
};
