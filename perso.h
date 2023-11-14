#ifndef PERSO_H
#define PERSO_H
#include <iostream>
#include <string.h>
using namespace std;

class Perso //la classe mère
{
    protected:
    
    string nom;
    int Pt_de_vie;
    int attaque;
    int defense;
    float vitesse;
    int energie;

    public:

    // constructeur pour initialiser un personnage

    Perso(string, int, int);
    void Frappe_preventive(Perso& target);//fonction qui modifie la valeur de la variable via la référence cible
    void blast(Perso& target);
    void recevoirDegats(int);
    void attaque_delta(Perso& target);
    void getPtDeVie();

};
#endif // PERSO_H