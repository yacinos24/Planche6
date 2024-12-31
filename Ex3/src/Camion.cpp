#include "Camion.h"
#include "Vehicule.h"
#include <iostream>
using namespace std;
Camion::Camion(double prix,int an,double chargeMax)
    :Vehicule(prix,an),chargeMax(chargeMax){}
void Camion::accelerer()const {
            cout<<"Je peux atteindre 120km/h"<<endl;
}
void Camion::afficher() const {
    Vehicule::afficher();
    cout<<"Charge maximale: "<<chargeMax<<" tonnes"<<endl;
}
Camion::~Camion()
{
    //dtor
}
