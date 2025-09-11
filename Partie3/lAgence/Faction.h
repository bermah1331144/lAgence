#pragma once
#include <string>

using std::string;

class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;


public:
	Faction(int _attaque, int _defense, int _vie, int _capacite, string _nom);
	~Faction();

	string getNom();

	virtual std::string to_string();
};

