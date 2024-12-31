using namespace std;
#include "Robot.h"
#include <iostream>
#include <string>
//Constructor
Robot::Robot(string nom, float x, float y, float porte)
    :nom(nom),x(x),y(y),porte(porte){
    this->estMort=false;
}
//Getters
string  Robot::getNom() const{return this->nom;}
bool Robot::getStatut() const{return this->estMort;}
float Robot::getX() const{return this->x;}
float Robot::getY() const{return this->y;}
float Robot::getPortee() const{return this->porte;}
//Setters
void Robot::setStatut(bool Mort){this->estMort=Mort;}
//Methods
void Robot::deplacer(float dx,float dy){
    x+=dx;
    y+=dy;
}
void Robot::afficher()const{
    cout << "Nom: " << nom << ", Position: (" << x << ", " << y << "), Portée: " << porte
         << ", Statut: " << (estMort ? "Mort" : "Vivant") << endl;
}


Robot::~Robot(){
    //dtor
}
