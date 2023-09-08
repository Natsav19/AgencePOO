#include "Faction.h"
Faction::Faction() :attaque(0), defense(0), vie(0), capacite(0)
{

}
Faction::Faction(int att,int def,int hp,int cap, std:: string name)
{
	attaque = att;
	defense = def;
	vie = hp;
	capacite = cap;
	nom = name;
}

std::string Faction::getNom()
{
	return nom;
}
