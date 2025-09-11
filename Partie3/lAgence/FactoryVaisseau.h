#pragma once
#include <string>
#include <cstdlib>
#include "Vaisseau.h"
#include "Faction.h"

using std::string;

int genererNbr(int min, int max);
class FactoryVaisseau : public Vaisseau
{
public:
	static Vaisseau* getRandomVaisseau();
	static Faction* getRandomFaction();

};

