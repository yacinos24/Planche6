#include "Piece.h"
#include <string>
#include <iostream>
using namespace std;
Piece::Piece(const string& couleur, int x, int y)
    :couleur(couleur),x(x),y(y) {}
void Piece::afficher() const {
    cout <<"Couleur: "<<couleur<<", Position: ("<<x<<", "<<y<<")"<<endl;
}
Piece::~Piece(){}
