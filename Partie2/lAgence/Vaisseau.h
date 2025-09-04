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
	Faction* faction;

public:
	Vaisseau(string nom,int attaque, int defense,int vie,int capacite,int niveau,int exp);
	~Vaisseau();

	inline int getValeurMarchande() { return valeurMarchande; }

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();

};

