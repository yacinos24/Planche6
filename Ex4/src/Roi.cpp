#include "Roi.h"
#include "Piece.h"
#include <string>
#include <iostream>
using namespace std;
Roi::Roi(const string& couleur, int x, int y) : Piece(couleur, x, y) {}

void Roi::deplacer(int dx, int dy) {
    //V�rifier si le d�placement est valide pour un roi
    if (abs(dx)<=1 && abs(dy)<=1) {
        int nx = x + dx;
        int ny = y + dy;
        // V�rifier que la nouvelle position est dans les limites de l'�chiquier
        if (nx>=1 && nx<=8 && ny>=1 && ny<=8) {
            x=nx;
            y=ny;
            cout<<"Le roi s'est d�plac� en ("<<x<<", "<<y<<")"<<endl;
        } else {
            cout<<"D�placement hors limites !"<<endl;
        }
    } else {
            cout<<"D�placement invalide pour un roi !"<<endl;
    }
}

void Roi::afficher() const {
    cout<<"Type: Roi, ";
    Piece::afficher();
}

Roi::~Roi()
{
    //dtor
}
