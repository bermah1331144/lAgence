#pragma once
#include <string>
#include "Vaisseau.h"
#include "Faction.h"

using std::string;

inline int genererNbr(int min, int max);
class FactoryVaisseau : public Vaisseau
{
public:
	static Vaisseau* getRandomVaisseau();



private:
	static Faction* getRandomFaction();
};

