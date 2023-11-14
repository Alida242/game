#include "perso.h"
#include "Berserker.h"
#include "SnowQueen.h"
using namespace std;


int main()
{

    Perso jet("John", 500, 20);
    Berserker net("Bill", 200, 10);
    SnowQueen let("Marc", 300, 50);
    jet.Frappe_preventive(net);
    net.Frappe_preventive(jet);
    net.frappePunitive(let);
    let.javelot_de_glace(net);
    net.coupeDechaine(let);
    jet.blast(net);


    return 0;
    
}
