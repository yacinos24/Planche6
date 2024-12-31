#include "Enseignant.h"

Enseignant::Enseignant(const string& nom, int age, const string& sexe, const string& charge)
    : Personne(nom,age,sexe),charge(charge) {}

string Enseignant::getCharge() const {return charge;}
void Enseignant::setCharge(const string& c) {charge = c;}

string Enseignant::getPersonne() const {
    return Personne::getPersonne()+", Charge: "+charge;
}
Enseignant::~Enseignant()
{
    //dtor
}
