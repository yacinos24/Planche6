#ifndef VOITURE_H
#define VOITURE_H

#include <Vehicule.h>


class Voiture : public Vehicule
{
    public:
        Voiture(double prix,int an,double nbPlaces);
        void accelerer()const override;
        void afficher() const override;
        virtual ~Voiture();

    protected:

    private:
        int nbPlaces;
};

#endif // VOITURE_H
