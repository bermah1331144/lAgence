#include "Faction.h"
Faction::Faction()
{

}
Faction::Faction(int _attaque, int _defense, int _vie, int _capacite, string _nom) :attaque(5), defense(4), vie(10), capacite(10), nom("Rouge")
{
	
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	nom = _nom;
}
Faction::~Faction() {

}
std::string Faction::to_string() {
	std::string info;
	info.append("Nom de votre faction" + nom + "\n");

	return info;
}