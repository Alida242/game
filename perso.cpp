#include "perso.h"

Perso::Perso(string name, int pdv, int vit)
{
    nom=name;
    Pt_de_vie=pdv;
    attaque=20;
    vitesse=vit;
    defense=10;
    energie=0;

}
void Perso::recevoirDegats(int degatrecu)
{
    Pt_de_vie -= degatrecu;
    if(Pt_de_vie<0)
    {
        Pt_de_vie=0;
    }
    cout<<"La cible attaquée a : " <<Pt_de_vie<<" points de vie"<<endl;

}

void Perso::Frappe_preventive(Perso &target)
{
   energie+=10;
   target.recevoirDegats(attaque);
}

void Perso::blast(Perso &target)
{
    target.recevoirDegats(attaque * 1.5);
    energie+=15;
    cout<<"La cible attaquée a : " <<Pt_de_vie<<" points de vie"<<endl;
}
void Perso::attaque_delta(Perso &target)
{
    if (energie>=100)
    {
    energie-=100;
    target.recevoirDegats(attaque * 3.5);
    }
    else
    {
        cout<<"Impossible d'attaquer"<<endl; //retourne 0 si l'énergie n'est pas suffisante pour cette attaque
    }
}