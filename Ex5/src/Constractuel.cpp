#include "Constractuel.h"
#include "Enseignant.h"
#include "Etudiant.h"

Constractuel::Constractuel(const string& nom,int age,const string& sexe,const string& charge,const string& filiere)
    :Enseignant(nom,age,sexe,charge),Etudiant(nom,age,sexe,filiere) {}
string Constractuel::getPersonne() const {
    return Enseignant::getPersonne()+", Filière: "+Etudiant::getFiliere();
}
Constractuel::~Constractuel(){}
