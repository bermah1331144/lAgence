#pragma once
#include <string>
#include<vector>
#include<iostream>
#include "Vaisseau.h"
using std::string;
using namespace std;

class Station
{
public:
	int platinumDispo;
	int vieStation;


	Station(int platinumDispo, int vieStation);
	~Station();


	//Qu'est-ce que je veux retournée ? 
	std::vector<Vaisseau*> getVaisseauDispo();
	void ajouterVaisseau(Vaisseau* vaisseau);
	void init();
	void afficheInfoStation();

private:
	std::vector<Vaisseau*> vecVaisseau;
};

