#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <Personne.h>


class Enseignant : public Personne
{
    public:
        Enseignant(const string& nom, int age, const string& sexe, const string& charge);
        string getCharge() const;
        void setCharge(const string& c);
        string getPersonne() const override;
        virtual ~Enseignant();

    protected:

    private:
        string charge;
};

#endif // ENSEIGNANT_H
