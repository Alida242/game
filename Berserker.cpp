#include "Berserker.h"

Berserker::Berserker(string name, int pdv,int vit) : Perso(name,pdv,vit)
{

}

void Berserker::frappePunitive(Perso& target)
{
    Pt_de_vie-=0.1*Pt_de_vie;
    target.recevoirDegats(0.3*Pt_de_vie);
    energie+=20;
    cout<<"La cible a recu : " <<energie<<" energie"<<endl;
}

void Berserker::coupeDechaine(Perso& target)
{
    Pt_de_vie-=0.15*Pt_de_vie;
    target.recevoirDegats(0.5*Pt_de_vie);
    energie+=30;
    cout<<"Vous avez obtenu : " <<energie<<" energie"<<endl;
}

void Berserker::mouvementAlpha(Perso& target)
{
    if(energie>=100)
    {
        energie-=100;
        target.recevoirDegats(0.75 * Pt_de_vie);
        Pt_de_vie+=0.5*Pt_de_vie;// régénération de 50% de points de vie
        if(Pt_de_vie >100)
        {
            Pt_de_vie-=100; // limite les points de vie à 100
        }
    }
    else
    {
        cout<<"Impossible d'attaquer"<<endl;
    }
    
}