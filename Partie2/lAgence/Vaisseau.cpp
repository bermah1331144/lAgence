#include "Vaisseau.h"

Vaisseau::Vaisseau(string _nom, int _attaque, int _defense, int _vie, int _capacite, int _niveau, int _exp) :attaque(0), defense(0), vie(0), capacite(5), niveau(1), exp(20)
{
	nom = _nom;
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	niveau = _niveau;
	exp = _exp;
	
}
Vaisseau::~Vaisseau()
{

}

std::string Vaisseau::to_string() {
	std::string info;
	info.append("Nom: " + nom + "\n");

	return info;
}
