#pragma once
#include "Vaisseau.h"
#include <string>

using std::string;

class Transport : public Vaisseau
{
public:
	Transport(Faction* maFaction);
	~Transport();

	virtual std::string to_string();


};

