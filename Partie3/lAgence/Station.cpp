#include "Station.h"
#include"FactoryVaisseau.h"
#include <memory>
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



void Station::afficheInfoStation()
{

	cout << "Information de votre station" << endl;
	cout << "Platinum disponible " << platinumDispo << endl;
	cout << "Vie restant " << vieStation << endl;
	cout << "Nombre de vaisseau Disponible " << vecVaisseau.size() << endl;
}