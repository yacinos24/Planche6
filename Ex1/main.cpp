#include <iostream>
#include "Vecteur2D.h"
#include "Vecteur3D.h"
using namespace std;

int main()
{
    Vecteur2D v=Vecteur2D();
    cout<<"Vecteur nulle:"<<endl;
    v.afficher();
    v.deplacerXY(4,5);
    cout<<endl<<"Vecteur apres deplacement:"<<endl;
    v.afficher();
    Vecteur3D* vect=new Vecteur3D(4,5,6);
    cout<<endl<<"Vecteur 3D:"<<endl;
    vect->afficher();
    return 0;
}
