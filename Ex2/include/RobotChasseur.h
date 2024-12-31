#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include <Robot.h>

class RobotChasseur : public Robot
{
    public:
        //Constructor
        RobotChasseur(string nom, float x, float y, float portee);
        //Methods
        bool estAPorte(const Robot& r)const;
        void tuer(Robot& r);
        virtual ~RobotChasseur();

    protected:

    private:
};

#endif // ROBOTCHASSEUR_H
