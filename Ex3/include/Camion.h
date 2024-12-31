#ifndef CAMION_H
#define CAMION_H
#include <iostream>
#include "Vehicule.h"
using namespace std;
class Camion: public Vehicule
{
    public:
        Camion(double prix,int an,double chargeMax);
        void accelerer()const override;
        void afficher() const override;
        virtual ~Camion();

    protected:

    private:
        double chargeMax;
};

#endif // CAMION_H
