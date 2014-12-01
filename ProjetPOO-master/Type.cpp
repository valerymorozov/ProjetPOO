#include <iostream>
#include <string>
#include "IAffichage.hpp"

using namespace std;

#pragma once

/*!
* Classe mère Type, tous les types héritent de celle-ci
* Implémente l'interface IAffichage
*/

class Type : public IAffichage {
	public :
		/*!
		 * Accesseur à l'identifiant du type
		*/
		int getId(){ return id_; }
		/*!
		 * Mutateur de l'identifiant du type
		*/
		void setId(int id){ id_ = id; }
		/*!
		 * Accesseur au libellé du type
		*/
		string getLibelle(){ return libelle_; }
		/*!
		 * Mutateur du libellé du type
		*/
		void setLibelle(string l){ libelle_ = l; }
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
		virtual void afficherInfo()
		{
			cout << "Type : " << libelle_ << "\n" << endl;
		}
		
	private :
		int id_;
		string libelle_;
};
