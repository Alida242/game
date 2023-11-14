#ifndef BERSERKER_H
#define BERSERKER_H
#include "perso.h"
using namespace std;

//ce fichier définit la classe berserker qui hérite de "perso" et a ses propres capacités

class Berserker : public Perso 
{
 
    public:
    
    Berserker(string, int, int);
    void frappePunitive(Perso& target); //Attaque spéciale berserker
    void coupeDechaine(Perso& target); //Attaque améliorée berserker
    void mouvementAlpha(Perso& target); //Attaque spéciale berserker
};

#endif //BERSERKER_H