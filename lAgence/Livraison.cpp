#include "Livraison.h"

Livraison::Livraison():Vaisseau(nom,attaque,defense,vie,capacite,niveau,exp)
{
	nom = "AmazonLivraison";
	attaque = 75;
	defense = 50;
	vie = 90;
	niveau = 0;
	exp = 10;
};
Livraison::~Livraison()
{

}
std::string Livraison::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau de livraison \n");
	return message;
}
