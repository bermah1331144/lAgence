#include "FactoryVaisseau.h"
#include "Vaisseau.h"
#include "Guerre.h"
#include "Transport.h"
#include "Livraison.h"
inline int genererNbr(int min, int max);
Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	//init valeur a 0
	Vaisseau* vaisseau(0);

	int max = 0;
	int min = 0;

	Faction* maFaction = getRandomFaction();

	int typeV = genererNbr(1, 3);

	if (typeV == 1)
		vaisseau = new Guerre;
	else if (typeV == 2)
		vaisseau = new Transport;
	else
		vaisseau = new Livraison;


}


inline int genererNbr(int min, int max) {

	return (rand() % (max - min + 1)) + min;
}