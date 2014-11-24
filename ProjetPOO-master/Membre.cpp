#include <iostream>
#include <string>
#include "Equipement.cpp"
#include "IAffichage.hpp"

using namespace std;

#pragma once

class Membre : public IAffichage {
	public :	
		int getId(){ return id_; }
		void setId(int id) { id_ = id; }
		int getPDV(){ return pdv_; }
		void setPDV(int p) { pdv_ = p; }
		string getLibelle(){ return libelle_; }
		void setLibelle(string l) { libelle_ = l; }
		Equipement getEquip(){ return equip_; };
		Equipement setEquip(Equipement e){ equip_ = e; };
		
		virtual void afficherInfo()
		{
			cout << libelle_ << " : " << " PDV restants : " << pdv_ << " Equipement : " << endl;
			equip_.afficherInfo();
			cout << "\n" << endl;
		}
		
	private :
		int id_, pdv_;
		string libelle_;
		Equipement equip_;
};
