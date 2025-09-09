#include "Livraison.h"
#include "Faction.h"
Livraison::Livraison(Faction* maFaction):Vaisseau("AmazoneLivraison",75,50,90,0,10,5)
{
	Faction* faction = maFaction;
};
Livraison::~Livraison()
{

}
std::string Livraison::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de livraison \n");
	return message;
}
