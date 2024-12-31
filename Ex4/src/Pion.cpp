#include "Pion.h"
#include "Piece.h"
#include <iostream>
#include <string>
using namespace std;
Pion::Pion(const string& couleur, int x, int y):Piece(couleur,x,y){}
void Pion::deplacer(int dx, int dy) {
    if (y+1<=8) {
        y+=1;
    } else {
        cout << "Pion a atteint la limite de l'échiquier!" << endl;
    }
}

void Pion::afficher() const {
    cout << "Type: Pion, ";
    Piece::afficher();
}
Pion::~Pion()
{
    //dtor
}
