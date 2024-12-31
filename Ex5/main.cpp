#include <iostream>
#include <vector>
#include "Constractuel.h"
#include <iostream>
int main() {
    // Création des objets
    Enseignant prof("Dr. Smith",45,"M","Mathématiques");
    Etudiant etudiant("Alice",20,"F","Informatique");
    Constractuel constractuel("John",30,"M","Physique","Mécanique");

    // Affichage des informations
    cout<<"Enseignant: "<<prof.getPersonne()<<endl;
    cout<<"Etudiant: "<<etudiant.getPersonne()<<endl;
    cout<<"Contractuel: "<<constractuel.getPersonne()<<endl;
    return 0;
}
