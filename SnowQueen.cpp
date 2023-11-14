#include "SnowQueen.h"

SnowQueen::SnowQueen(string name, int pdv, int vit) : Perso(name,pdv,vit)
{
}

void SnowQueen::javelot_de_glace(Perso &target)
{
       
        energie+=20;
        target.recevoirDegats(1.25*attaque);
        cout<<"Vous avez : " <<energie<<" energie"<<endl;
}

void SnowQueen::vent_glacial(Perso &target)
{
    energie+=30;
    target.recevoirDegats(1.50*attaque);
    cout<<"Vous avez gagné : " <<energie<<" energie"<<endl;
}

void SnowQueen::let_it_go(Perso &target)
{
    if (energie>=100)
    {
        energie-=100;
       target.recevoirDegats(1.75 *attaque);
    }
    else{
       cout<<"Impossible d'attaquer"<<endl;
    }
}