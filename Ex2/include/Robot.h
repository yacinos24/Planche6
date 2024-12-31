using namespace std;
#include <string>
#ifndef ROBOT_H
#define ROBOT_H


class Robot
{
    public:
        //Constructor
        Robot(string nom,float x ,float y,float porte);
        //Getters
        string getNom() const;
        bool getStatut() const;
        float getX() const;
        float getY() const;
        float getPortee() const;
        //Setters
        void setStatut(bool estMort);
        //Methods
        void deplacer(float x, float y);
        void afficher()const;

        virtual ~Robot();

    protected:
        string nom;
        float x,y,porte;
        bool estMort;
    private:

};

#endif // ROBOT_H
