#pragma once
#include <string> 

class Vaisseau
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	std::string nom;
	int niveau;
	int exp;
	std::string type;


public:
	Vaisseau(int att, int def, int hp, int cap, int lvl, int ex, std::string name);
	~Vaisseau();
	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};

