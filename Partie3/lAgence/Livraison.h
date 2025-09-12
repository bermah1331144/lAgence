#pragma once
#include "Vaisseau.h"
#include <string>

class Livraison : public Vaisseau
{
public:
	Livraison(Faction* maFaction);
	~Livraison();

	
	virtual std::string to_string();
};

