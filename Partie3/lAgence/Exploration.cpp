#include "Exploration.h"
#include "Vaisseau.h"
#include "Station.h"
using namespace std;

//QU'EST-CE QUE JE FAIS ?

	//-gestion des tour
	//-Gestion des ressources
Exploration::Exploration(Vaisseau& vaisseauActuel)
{
	int tempsExploration = vaisseauActuel.genererVoyageAleatoire();
	int choix = 0;
	int toursPasses = 0;
	if (tempsExploration > 0) {
		cout << " Une nouvelle opportunite d'exploration est disponible pour une duree de " << tempsExploration << " tours." << endl;
	}
	else {
		cout << "Aucun voyage interessant trouve pour le moment." << endl;
	
	}
}
void Exploration::diminuerTour() {
	cout << "\n -> Un tour passe..." << endl;
 	if (toursRestants > 0) {
		toursRestants--;
		cout << "Il reste maintenant " << toursRestants << "tours." << endl;
	}
	else {
		cout << "Le temps pour l'Exploration est deja ecoule!" << endl;

	}
}

bool Exploration::estTerminee() const{
	return toursRestants <= 0;
}

int Exploration::getRessources(Station& laStation) {

	int ressourceDeBase = laStation.platinumDispo; // dois aller chercher ma variable ds station 
	int ressourceTrouver = 0;
	if (toursPasses > 4) {
		int chance = rand() % 100;
		if (chance < 30) {
			ressourceTrouver += ressourceDeBase / 2;
		}
	}
	return ressourceTrouver;
}
