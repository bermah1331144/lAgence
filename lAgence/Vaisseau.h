#pragma once
#include <string>

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
	int niveau;
	int exp;


public:

	inline int getValeurMarchande() { return valeurMarchande; }

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();

};

