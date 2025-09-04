#pragma once
#include "Vaisseau.h"
#include <string>

using std::string;

class Transport : public Vaisseau
{
public:
	Transport();
	~Transport();

	virtual std::string to_string();


};

