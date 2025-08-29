#pragma once
#include "Faction.h"
#include <string>
class Rouge : public Faction
{
public:
	Rouge();
	~Rouge();

	virtual std::string to_string();
};

