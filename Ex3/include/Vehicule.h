#ifndef VEHICULE_H
#define VEHICULE_H


class Vehicule
{
    public:
        Vehicule(double prix,int an);
        virtual void afficher()const;
        virtual void accelerer()const=0 ;
        virtual ~Vehicule();

    protected:
        double prix;
        int anneeModele;
        long numVehicule,numSerie;
    private:
        static long s,v;
};
#endif // VEHICULE_H
