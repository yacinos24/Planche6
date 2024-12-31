#include "Robot.h"
#include "RobotChasseur.h"
#include <math.h>
#include <iostream>
using namespace std;
//Constructor
RobotChasseur::RobotChasseur(string nom,float x ,float y,float porte)
    : Robot(nom,x,y,porte){}
//Methods
bool RobotChasseur::estAPorte(const Robot& r)const{
    return (sqrt(pow(r.getX() - x, 2) + pow(r.getY() - y, 2)) <= porte);
}
void RobotChasseur::tuer(Robot& r){
    if (this->estAPorte(r) && r.getPortee()){
        r.setStatut(true);
        cout<<"Le robot "<<r.getNom()<<" a été tué par "<<nom<<"!"<<endl;
    }
}
RobotChasseur::~RobotChasseur()
{
    //dtor
}

