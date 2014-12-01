#pragma once

/*!
 * Interface d'affichage implémentée par toutes les classes de l'application
 */

class IAffichage
{
    public:
		/*!
		* Destructeur explicite
		*/
		virtual ~IAffichage(){}
		/*!
		* Méthode d'affichage à redéfinir par chaque classe utilisatrice
		*/
        virtual void afficherInfo() = 0;
};
