#pragma once
#include <string>
class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	std::string nom;
public:
	Faction();
	Faction(int att, int def, int hp, int cap, std::string name);
	std::string getNom();
};

