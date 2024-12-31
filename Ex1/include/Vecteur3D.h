#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include <Vecteur2D.h>


class Vecteur3D : public Vecteur2D
{
    public:
        //Constructors
        Vecteur3D();
        Vecteur3D(double x,double y,double z);
        //Methods
        void afficher();
        void deplacerZ(double dz);
        void deplacerXYZ(double dx,double dy,double dz);


        virtual ~Vecteur3D();


    protected:

    private:
        double z;
};

#endif // VECTEUR3D_H
