#ifndef SNOWQUEEN_H
#define SNOWQUEEN_H
#include "perso.h"
using namespace std;

//ce fichier définit la classe snowQueen qui hérite de "perso" et a ses propres capacités

class SnowQueen : public Perso
{
    public:

    SnowQueen(string, int, int);
    void javelot_de_glace(Perso& target);
    void vent_glacial(Perso& target);
    void let_it_go(Perso& target);
};

#endif //SNOWQUEEN_H