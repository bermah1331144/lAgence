#pragma once
#include "Vaisseau.h"
#include <string>
#include "Faction.h"

class Guerre : public Vaisseau
{
public:
	Guerre(Faction* maFaction);
	~Guerre();

	virtual std::string to_string();
};

