#include "Personne.h"

Personne::Personne(const string& nom, int age, const string& sexe)
    : nom(nom), age(age), sexe(sexe) {}
string Personne::getNom() const {return nom;}
int Personne::getAge() const {return age;}
string Personne::getSexe() const {return sexe;}

void Personne::setNom(const string& n) {nom = n;}
void Personne::setAge(int a) { age=a; }
void Personne::setSexe(const string& s) {sexe=s;}

string Personne::getPersonne() const {
    return "Nom: "+nom+", Age: "+to_string(age)+", Sexe: "+sexe;
}

Personne::~Personne(){}
