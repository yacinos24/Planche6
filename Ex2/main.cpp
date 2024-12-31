#include "RobotChasseur.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Création du robot chasseur "Optimus"
    RobotChasseur RobotChass1("Optimus", 2, 3, 25);

    // Déplacement d'Optimus
    RobotChass1.deplacer(33, 19);
    cout << "Informations sur Optimus après déplacement :" << endl;
    RobotChass1.afficher();

    // Création desautres robots
    vector<Robot> robots = {
        Robot("Megatron", 34, 22, 10),
        Robot("Salah", 10, 5, 5),
        Robot("7san", 40, 50, 20),
        Robot("Mohsen", 20, 10, 15),
        Robot("aziz", 35, 20, 30)
    };

    cout << "Liste des robots :" << endl;
    for (auto robot : robots) {
        robot.afficher();
    }
    cout<<endl;
    // Traquer et tuer
    cout << "Optimus commence à traquer les ennemis..." << endl;
    for (Robot& robot : robots) {
        if (RobotChass1.estAPorte(robot)){
            RobotChass1.tuer(robot);
        }
    }
    //Etat final
    cout << "État final des robots :" << endl;
    for (Robot& robot : robots) {
        robot.afficher();
    }

    return 0;
}
