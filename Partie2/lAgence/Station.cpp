#include "Station.h"
#include"FactoryVaisseau.h"
Station::Station(int _platinumDispo, int _vieStation) : platinumDispo(_platinumDispo), vieStation(_vieStation) {

}
Station::~Station()
{

}
void Station::init()
{
	for(int i=0;i<3;i++)
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
	}
}
std::vector<Vaisseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}

void Station::ajouterVaisseau(Vaisseau* vaisseau)
{
	if (vaisseau != nullptr) {
		vecVaisseau.push_back(vaisseau);
	}
}