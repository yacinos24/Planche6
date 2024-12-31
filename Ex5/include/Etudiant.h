#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <Personne.h>


class Etudiant : public Personne
{
    public:
        Etudiant(const string& nom,int age,const string& sexe,const string& filiere);
        string getFiliere() const;
        void setFiliere(const string& f);
        string getPersonne() const override;
        virtual ~Etudiant();

    protected:

    private:
        string filiere;
};

#endif // ETUDIANT_H
