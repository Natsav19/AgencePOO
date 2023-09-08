#include "Vaisseau.h"
#include <string> 

Vaisseau::Vaisseau(int att, int def, int hp, int cap, int lvl, int ex, std::string name) 
{
	attaque = att;
	defense = def;
	vie = hp;
	niveau = lvl;
	exp = ex;
	nom = name;
}

Vaisseau::~Vaisseau() {}

std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom :" + nom + "\n");
	info.append("Type :" + type + "\n");
	info.append("Attaque :" + std::to_string(this->getAtt()) + "\n");
	info.append("Defense :" + std::to_string(this->getDef()) + "\n");
	info.append("Vie :" + std::to_string(this->getVie())  + "\n");
	info.append("Niveau:" + std::to_string(niveau) + "\n");
	info.append("exp :" + std::to_string(exp) + "\n");


	return info; 
}

int Vaisseau::getAtt()
{
	return attaque;
}
int Vaisseau::getDef()
{
	return defense;
}
int Vaisseau::getVie()
{
	return vie;
}