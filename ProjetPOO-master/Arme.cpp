#include <string>
#include <iostream>
#include "IAffichage.hpp"

using namespace std;

#pragma once

/*!
 * Classe mère Arme, toutes les armes héritent de celle-ci
 * Implémente l'interface IAffichage
 */

class Arme : public IAffichage{
	public :
		/*!
		 * Accesseur à l'identifiant de l'arme
		*/
		int getId(){ return id_; }
		/*!
		 * Mutateur de l'identifiant de l'arme
		*/
		void setId(int id) { id_ = id; }
		/*!
		 * Accesseur au libellé de l'arme
		*/
		string getLibelle(){ return libelle_; }
		/*!
		 * Mutateur du libellé de l'arme
		*/
		void setLibelle(string l) { libelle_ = l; }
		
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
		virtual void afficherInfo()
		{
			cout << "Nom arme : " << libelle_ << "\n" << endl;
		}
	
	private :
		int id_;
		string libelle_;
};
