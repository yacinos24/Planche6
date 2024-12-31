#include "Pion.h"
#include "Roi.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Creation  du vecteur de pieces
    vector<Piece*> pieces;

    // Ajout des pions
    pieces.push_back(new Pion("blanc", 2, 2));
    pieces.push_back(new Pion("noir", 3, 3));
    pieces.push_back(new Pion("blanc", 4, 5));
    pieces.push_back(new Pion("noir", 6, 7));

    // Ajout du roi
    pieces.push_back(new Roi("blanc", 4, 4));

    // Affichage des pieces
    cout << "__________________ Échiquier __________________" << endl;
    for (Piece* piece : pieces) {
        piece->afficher();
    }

    //Deplacement des pieces
    cout << "\n__________________ Déplacements __________________" << endl;
    for (Piece* piece : pieces) {
        piece->deplacer(1, 1);
        piece->afficher();
    }

    //effacer les variables dynamiquemnet allouées
    for (Piece* piece : pieces) {
        delete piece;
    }

    return 0;
}
