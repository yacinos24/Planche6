#ifndef PIECE_H
#define PIECE_H
#include <string>
using namespace std;

class Piece
{
    public:
        Piece(const string& couleur, int x, int y);
        virtual void deplacer(int dx, int dy) = 0;
        virtual void afficher() const;
        virtual ~Piece();

    protected:
        string couleur;
        int x, y;
    private:
};

#endif // PIECE_H
