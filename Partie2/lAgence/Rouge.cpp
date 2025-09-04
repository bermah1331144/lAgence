#include "Rouge.h"

Rouge::Rouge() :Faction(attaque, defense, vie, capacite,nom)
{

	attaque = 50;
	defense = 10;
	vie = 5;
	capacite = 4;
	nom = "RougeFeu";
}
Rouge::~Rouge() {

}
std::string Rouge::to_string() {
	std::string message = Faction::to_string();

	message.append("Je suis de l'equipe RougeFeu! \n");

	return message;
}