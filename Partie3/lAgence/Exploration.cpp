#include "Exploration.h"
#include "Vaisseau.h"
Exploration::Exploration(std::shared_ptr<Vaisseau> _vaisseau) : vaisseau(_vaisseau)
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
}
int Exploration::getRessources() {

	int ressourceDeBase = 35;
	int ressource = ressourceDeBase;
	if (toursRestants > 4) {
		int chance = rand() % 100;
		if (chance < 30) {
			ressource += ressourceDeBase / 2;
		}
	}
	return ressource;
}
