

#include <iostream>
#include "Vaisseau.h"
using namespace std;

void afficherVaisseau()
{
    cout << "     /\\" << endl;
    cout << "    /  \\" << endl;
    cout << "   |    |" << endl;
    cout << "   |====|" << endl;
    cout << "   |    |" << endl;
    cout << "   |____|" << endl;
    cout << "    ||||" << endl;
    cout << "   vvvv" << endl;
}

int main()
{
    afficherVaisseau();

    Vaisseau monVaisseau("Paul", 10, 10, 10, 10, 10, 10);
    int platinum = 0;
    int vie = 100;
    int nbrVaisseauRestant = 5;
    int choix = 0;


    cout << "Bienvenu Chez Nova Industries \n Appuyer sur un touche pour afficher le menu" << endl;
    cin >> choix;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Afficher information des la sation" << endl;
        cout << "2. Liste des vaisseau disponible dans la station " << endl;
        cout << "3.Acheter un vaisseau " << endl;

        switch (choix) {
        case 1:
            cout << "Information de votre station" << endl;
            cout << "Platinum disponible " << platinum << endl;
            cout << "Vie restant " << vie << endl;
            cout << "Nombre de vaisseau Disponible " << nbrVaisseauRestant << endl;
        }
    }


    cout << monVaisseau.to_string()  << std::endl ;


}

