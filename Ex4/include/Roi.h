#ifndef ROI_H
#define ROI_H
#include "Piece.h"
#include <string>
using namespace std;
#include <Piece.h>


class Roi : public Piece
{
    public:
        Roi(const string& couleur, int x, int y);
        void deplacer(int dx, int dy) override;
        void afficher() const override;
        virtual ~Roi();

    protected:

    private:
};

#endif // ROI_H
