#ifndef PION_H
#define PION_H
#include "Piece.h"
#include <string>
using namespace std;

class Pion: public Piece
{
    public:
        Pion(const string& couleur, int x, int y);
        void deplacer(int dx, int dy) override;
        void afficher() const override;
        virtual ~Pion();

    protected:

    private:
};

#endif // PION_H
