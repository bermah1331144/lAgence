#include "guerre.h"
#include "Vaisseau.h"

Guerre::Guerre(Faction* maFaction):Vaisseau("monCul",10,10,10,10,1,10, Vaisseau::genererVoyageAleatoire(2,5))
{
	Faction* faction= maFaction ;

}
Guerre::~Guerre() {

}
std::string Guerre::to_string() {
	return "Vaisseau Guerre";
	//std::string message = Vaisseau::to_string();

	//message.append("Je suis un vaisseau qui va tout briser !\n");
	//return message;
}
