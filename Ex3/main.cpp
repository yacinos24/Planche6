#include "Voiture.h"
#include "Camion.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Voiture v1(2023, 30000, 5);
    Voiture v2(2021, 25000, 4);
    Camion c1(2020, 80000, 10.5);
    Camion c2(2019, 90000, 12.0);
    //affichage des vehicules
    cout << "___________________ Parc Auto __________________" << endl;
    v1.afficher();
    v1.accelerer();

    v2.afficher();
    v2.accelerer();

    c1.afficher();
    c1.accelerer();

    c2.afficher();
    c2.accelerer();

    return 0;
}
