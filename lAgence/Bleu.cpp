#include "Bleu.h"

Bleu::Bleu() :Faction(attaque, defense, vie, capacite, nom) {

	attaque = 20;
	defense = 60;
	vie = 8;
	capacite = 5;
	nom = "BleuCiel";

}
Bleu::~Bleu() {

}
std::string Bleu::to_string() {
	std::string message = Faction::to_string();

	message.append("Je suis de l'equipe BleuCiel! \n");

	return message;

}
