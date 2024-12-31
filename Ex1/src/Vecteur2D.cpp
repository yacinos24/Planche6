#include "Vecteur2D.h"
#include <iostream>
using namespace std;

//Constructeurs
Vecteur2D::Vecteur2D():x(0),y(0){}
Vecteur2D::Vecteur2D(double x,double y):x(x),y(y){}
//Getters
double Vecteur2D::getX(){return this->x;}
double Vecteur2D::getY(){return this->y;}
//Methods
void Vecteur2D::afficher(){
    cout<<"("<<x<<","<<y<<")";
}
void Vecteur2D::deplacerX(double dx){
    this->x+=dx;
}
void Vecteur2D::deplacerY(double dy){
    this->y+=dy;
}
void Vecteur2D::deplacerXY(double dx, double dy){
    this->x=x+dx;
    this->y=y+dy;
}
Vecteur2D::~Vecteur2D()
{
    //dtor
}
