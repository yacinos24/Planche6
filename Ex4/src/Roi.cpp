#include "Roi.h"
#include "Piece.h"
#include <string>
#include <iostream>
using namespace std;
Roi::Roi(const string& couleur, int x, int y) : Piece(couleur, x, y) {}

void Roi::deplacer(int dx, int dy) {
    //Vérifier si le déplacement est valide pour un roi
    if (abs(dx)<=1 && abs(dy)<=1) {
        int nx = x + dx;
        int ny = y + dy;
        // Vérifier que la nouvelle position est dans les limites de l'échiquier
        if (nx>=1 && nx<=8 && ny>=1 && ny<=8) {
            x=nx;
            y=ny;
            cout<<"Le roi s'est déplacé en ("<<x<<", "<<y<<")"<<endl;
        } else {
            cout<<"Déplacement hors limites !"<<endl;
        }
    } else {
            cout<<"Déplacement invalide pour un roi !"<<endl;
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
