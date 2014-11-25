#pragma once

class IAffichage
{
    public:
		virtual ~IAffichage(){}
        virtual void afficherInfo() = 0;
};
