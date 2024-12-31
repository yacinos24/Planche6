#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
using namespace std;

class Personne
{
    public:
        Personne(const string& nom, int age, const string& sexe);
        string getNom() const;
        int getAge() const;
        string getSexe() const;
        void setNom(const string& n);
        void setAge(int a);
        void setSexe(const string& s);
        virtual string getPersonne() const;
        virtual ~Personne();

    protected:
        string nom;
        int age;
        string sexe;
    private:
};

#endif // PERSONNE_H
