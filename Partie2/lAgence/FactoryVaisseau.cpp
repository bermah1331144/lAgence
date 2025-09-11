#include "FactoryVaisseau.h"
#include "Vaisseau.h"
#include "Guerre.h"
#include "Transport.h"
#include "Livraison.h"
#include "Bleu.h"
#include "Rouge.h"
#include <cstdlib>

int genererNbr(int min, int max);

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	//init valeur a 0
	Vaisseau* vaisseau = nullptr;
	Faction* maFaction = getRandomFaction();

	int typeV = genererNbr(1, 3);

	if (typeV == 1)
		vaisseau = new Guerre(maFaction);
	else if (typeV == 2)
		vaisseau = new Transport(maFaction);
	else
		vaisseau = new Livraison(maFaction);

	return vaisseau;

}

Faction* FactoryVaisseau:: getRandomFaction()
{
	Faction* faction = nullptr;
	int typeFaction = genererNbr(1, 2);

	if (typeFaction == 1) {
		faction = new Bleu();
	}
	else
		faction = new Rouge();

	return faction;

}
inline int genererNbr(int min, int max) {

	return (rand() % (max - min + 1)) + min;
}