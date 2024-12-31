#ifndef VECTEUR2D_H
#define VECTEUR2D_H


class Vecteur2D
{
    public:
        //Constructeurs
        Vecteur2D();
        Vecteur2D(double x,double y);
        //Getters
        double getX();
        double getY();
        //Methods
        void afficher();
        void deplacerX(double dx);
        void deplacerY(double dy);
        void deplacerXY(double dx, double dy);
        virtual ~Vecteur2D();

    protected:

    private:
        double x,y;
};

#endif // VECTEUR2D_H
