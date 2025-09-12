#include "Livraison.h"
#include "Faction.h"
#include "Vaisseau.h"
Livraison::Livraison(Faction* maFaction):Vaisseau("AmazoneLivraison",75,50,90,0,10,5, Vaisseau::genererVoyageAleatoire(2,5))
{
	Faction* faction = maFaction;
};
Livraison::~Livraison()
{

}
std::string Livraison::to_string()
{

	return "Vaisseau Livraison";
	//std::string message = Vaisseau::to_string();

	//message.append("Je suis un vaisseau de livraison \n");
	//return message;
}
