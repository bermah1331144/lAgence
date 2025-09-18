#pragma once
#include <string>
#include "Faction.h"
using std::string;
class Vaisseau
{
private:
	int valeurMarchande;

protected:
	string nom;
	int attaque;
	int defense;
	int vie;
	int capacite;
	int niveau;
	int exp;
	int exploration;

	Faction* faction;

public:
	//Ceci est dans mon .h
	Vaisseau(string nom,int attaque, int defense,int vie,int capacite,int niveau,int exp, int exploration);
	~Vaisseau();

	static int genererVoyageAleatoire(int min = 2, int max = 5);
	int getAtt();
	int getDef();
	int getVie();


	virtual std::string to_string();

};

