#include <iostream>
#include <string>
#include "IAffichage.hpp"

using namespace std;

#pragma once

/*!
* Classe mère Equipement, tous les équipements héritent de celle-ci
* Implémente l'interface IAffichage
*/

class Equipement : public IAffichage {
	public :
		/*!
		 * Accesseur à l'identifiant de l'équipement
		*/
		int getId(){ return id_; }
		/*!
		 * Mutateur de l'identifiant de l'équipement
		*/
		void setId(int id) { id_ = id; }
		/*!
		 * Accesseur au libellé de l'équipement
		*/
		string getLibelle(){ return libelle_; }
		/*!
		 * Mutateur du libellé de l'équipement
		*/
		void setLibelle(string l) { libelle_ = l; }
		/*!
		 * Accesseur à la valeur de défense de l'équipement
		*/
		int getValDef(){ return valeurDefense_; }
		/*!
		 * Mutateur de la valeur de défense de l'équipement
		*/
		void setValDef(int v) { valeurDefense_ = v; }
		/*!
		 * Procédure d'affichage d'informations, redéfinit celle de
		 * l'interface IAffichage
		*/
		virtual void afficherInfo()
		{
			cout << libelle_ << " Valeur de défense : " << valeurDefense_ << "\n" << endl;
		}
		
	private :
		int id_, valeurDefense_;
		string libelle_;
};
