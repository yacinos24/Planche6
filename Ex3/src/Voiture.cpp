#include "Voiture.h"
#include "Vehicule.h"
#include <iostream>
using namespace std;
Voiture::Voiture(double prix,int an,double nbPlaces)
    :Vehicule(prix,an),nbPlaces(nbPlaces){}
void Voiture::accelerer()const {
            cout<<"Je peux atteindre 200km/h"<<endl;
}
void Voiture::afficher() const {
    Vehicule::afficher();
    cout<<"Nombre de places: "<<nbPlaces<<endl;
}
Voiture::~Voiture()
{
    //dtor
}
