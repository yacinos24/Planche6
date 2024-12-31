#include "Vecteur3D.h"
#include <iostream>
using namespace std;
//Constructors
Vecteur3D::Vecteur3D(double x,double y,double z):
    Vecteur2D(x,y),z(z){}
Vecteur3D::Vecteur3D():Vecteur2D(),z(0){}
//Methods
void Vecteur3D::afficher(){
    cout<<"("<<getX()<<","<<getY()<<","<<z<<")";
}
void Vecteur3D::deplacerZ(double dz){
    this->z+=dz;
}
void Vecteur3D::deplacerXYZ(double dx,double dy,double dz){
    Vecteur2D::deplacerXY(dx,dy);
    this->z=z;
}


Vecteur3D::~Vecteur3D()
{
    //dtor
}
