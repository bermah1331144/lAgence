#include "Exploration.h"
#include "Vaisseau.h"

//QU'EST-CE QUE JE FAIS ?

	//-gestion des tour
	//-Gestion des ressources
Exploration::Exploration()
{
	toursRestants = Vaisseau::genererVoyageAleatoire();
}
int Exploration::getToursRestant() {
	return toursRestants;
}
void Exploration::diminuerTour() {
	if (toursRestants > 0) {
		toursRestants--;
	}
	if (toursRestants == 0) {
		//doit revenir a la base
	}
}
int Exploration::getRessources() {

	int ressourceDeBase = 0;
	int ressource = ressourceDeBase;
	if (toursRestants > 4) {
		int chance = rand() % 100;
		if (chance < 30) {
			ressource += ressourceDeBase / 2;
		}
	}
	return ressource;
}
