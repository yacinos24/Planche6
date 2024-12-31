#ifndef CONSTRACTUEL_H
#define CONSTRACTUEL_H

#include "Enseignant.h"
#include "Etudiant.h"


class Constractuel : public Enseignant,public Etudiant
{
    public:
        Constractuel(const string& nom, int age, const string& sexe, const string& charge, const string& filiere);
        string getPersonne() const override;
        virtual ~Constractuel();

    protected:

    private:
};

#endif // CONSTRACTUEL_H
