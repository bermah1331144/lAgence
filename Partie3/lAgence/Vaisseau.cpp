#include "Vaisseau.h"
#include <cstdlib>
#include <memory>  
int genererNbr(int min, int max);
Vaisseau::Vaisseau(string _nom, int _attaque, int _defense, int _vie, int _capacite, int _niveau, int _exp, int _exploration) :nom(_nom), attaque(_attaque), defense(_defense), vie(_vie),capacite(_capacite),niveau(_niveau), exp(_exp), exploration(_exploration)
{

}
Vaisseau::~Vaisseau()
{

}

inline int genererNbr(int min, int max) {

	return (rand() % (max - min + 1)) + min;
}

int Vaisseau::genererVoyageAleatoire(int min, int max) {
	return genererNbr(min, max);
}

std::string Vaisseau::to_string() {
	std::string info;
	info.append("Nom: " + nom + "\n");
	return info;
}