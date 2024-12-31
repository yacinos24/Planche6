#include "Etudiant.h"

Etudiant::Etudiant(const string& nom, int age, const string& sexe, const string& filiere)
    : Personne(nom, age, sexe), filiere(filiere) {}
string Etudiant::getFiliere() const { return filiere; }
void Etudiant::setFiliere(const string& f) { filiere = f; }
string Etudiant::getPersonne() const {
    return Personne::getPersonne() + ", Filière: " + filiere;
}
Etudiant::~Etudiant()
{
    //dtor
}
