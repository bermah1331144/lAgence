#include "transport.h"
#include "Faction.h"
#include "Vaisseau.h"
Transport::Transport(Faction* maFaction) :Vaisseau("FranciscoTransport",10,50,100,1,10,10,Vaisseau::genererVoyageAleatoire(2,5))
{
	Faction* faction = maFaction;

}
Transport::~Transport() {

}
std::string Transport::to_string()
{
	return "Vaisseau Tramsport";
	//std::string message = Vaisseau::to_string();

	//message.append("Je suis un vaisseau de transport \n");
//	return message;
}
