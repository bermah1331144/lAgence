#pragma once
#include "Faction.h"
#include <string>


class Bleu : public Faction
{
public:
	Bleu();
	~Bleu();

	virtual std::string to_string();
};

