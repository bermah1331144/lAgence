#include "transport.h"
Transport::Transport() :Vaisseau("1",10,101,10,10,10,10)
{
	nom = "FranciscoTransport";
	attaque = 10;
	defense = 50;
	vie = 100;
	niveau = 1;
	exp = 1;


}
Transport::~Transport() {

}
std::string Transport::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de transport \n");
	return message;
}
