#include "Vehicule.h"
#include <iostream>
using namespace std;
long Vehicule::s=1;
long Vehicule::v=0;
Vehicule::Vehicule(double prix,int an):prix(prix),anneeModele(an){
    if (v=10000){
        v++;
        s++;
        v=0;
    }
    v++;
    numVehicule=v;
    numSerie=s;
}
void Vehicule::afficher()const{
    cout<<numVehicule<<" TUN "<<numSerie<<" ,année de modele:"<<anneeModele<<" ,prix:"<<prix;
}

Vehicule::~Vehicule(){
    //dtor
}
