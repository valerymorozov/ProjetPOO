#include <iostream>
#include <string>
#include "IAffichage.hpp"

using namespace std;

#pragma once

/*!
* Classe mère Effet, tous les effets héritent de celle-ci
* Implémente l'interface IAffichage
*/

class Effet : public IAffichage {
	public :
		/*!
		 * Accesseur à l'identifiant de l'effet
		*/
		int getId(){ return id_; }
		/*!
		 * Mutateur de l'identifiant de l'effet
		*/
		void setId(int id) { id_ = id; }
		/*!
		 * Accesseur au libellé l'effet
		*/
		string getLibelle(){ return libelle_; }
		/*!
		 * Mutateur du libellé de l'effet
		*/
		void setLibelle(string l) { libelle_ = l; }
		/*!
		 * Accesseur à la durée maximale, en tours, de l'effet
		*/
		int getNbToursMax(){ return nbToursMax_; }
		/*!
		 * Mutateur de la durée maximale, en tours, de l'effet
		*/
		void setNbToursMax(int n){ nbToursMax_ = n;}
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
		virtual void afficherInfo()
		{
			cout << libelle_ << "\n" << endl;
		}
	
	private :
		int id_, nbToursMax_;
		string libelle_;
};
