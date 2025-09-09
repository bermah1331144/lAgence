#include "transport.h"
#include "Faction.h"
Transport::Transport(Faction* maFaction) :Vaisseau("FranciscoTransport",10,50,100,1,10,10)
{
	Faction* faction = maFaction;

}
Transport::~Transport() {

}
std::string Transport::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de transport \n");
	return message;
}
