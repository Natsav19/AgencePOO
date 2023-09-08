#include <iostream>
#include "Faction.h"
#include "Transport.h"
int main()
{
    //Faction* bleu = new Faction(5, 8, 100, 3, "Bleu");
    //Faction* rouge = new Faction(10, 4, 100, 4, "Rouge")
    Transport * vaisseauPrice = new Transport();
    std::cout << vaisseauPrice->to_string();
    delete vaisseauPrice;

};

