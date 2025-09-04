#include "guerre.h"

Guerre::Guerre(Faction* maFaction):Vaisseau("monCul",10,10,10,10,1,10)
{
	nom = "DestroyeurMB";
	attaque  = 120;
	defense = 10;
	vie = 90;
	niveau = 25;
	exp = 50;
	Faction* faction= maFaction ;

}
Guerre::~Guerre() {

}
std::string Guerre::to_string() {
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau qui va tout briser !\n");
	return message;
}
