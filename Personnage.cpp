#include <iostream>
#include <string>
#include "Type.cpp"
#include "Membre.cpp"
#include "IAffichage.cpp"

using namespace std;

class Personnage : public IAffichage {
	public :
		Personnage(int id, string nom, int type){
			type_ = type;
			nom_ = nom;
			pdv_ = 333; //val arbitraire
			
			ajouterMembres();
			switch (type)
			{
				
			}
		};
		
		int getId(){ return id_; }
		void setId(int id){ id_ = id; }
		int getPDV(){ return pdv_; }
		void setPDV(int p){ pdv_ = p; }
		string getNom(){ return nom_; }
		void setNom(string l){ nom_ = l; }
		
		void ajouterMembres()
		{ 
			Membre brasG = new BrasGauche();
			Membre brasD = new BrasDroit();
			Membre tete = new Tete();
			Membre torse = new Torse();
			Membre jambeG = new JambeGauche();
			Membre jambeD = new JambeDroite();
			
			membres[0] = brasG.getId();
			membres[1] = brasD.getId();
			membres[2] = tete.getId();
			membres[3] = torse.getId();
			membres[4] = jambeG.getId();
			membres[5] = jambeD.getId();
		}
		
		void afficherInfo()
		{
			cout << "Personnage " << nom_ << " :\n" << endl;
			cout << type_::afficherInfo() << " :\n" << endl;
			cout << "PDV restants : " << pdv_ << " :\n" << endl;
			if (membres[0]!=null)
			{
				for (Membre m : membres)
				{
					m.afficherInfo();
				}
			}
			if (effetsActifs[0]!=null){
				cout << "Effet(s) actif(s) : " << "\n" << endl;
				for (Effet e : effetsActifs)
				{
					e.afficherInfo();
				}
			}
		}
		
	private :
		int id_, pdv_;
		string nom_;
		Type type_;
		int membres[6];
		int[] effetsActifs;
};
