

#include <iostream>
#include "Vaisseau.h"
#include "Station.h"
#include "FactoryVaisseau.h"
#include "Exploration.h"
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

    int choix = 0;
    Station NovaStation(100, 5);
    //maStation.init();
    cout << "Bienvenu Chez Nova Industries \n Appuyer sur un touche pour afficher le menu" << endl;
    cin.get();

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1.Afficher information des la sation" << endl;
        cout << "2.Liste des vaisseau disponible dans la station " << endl;
        cout << "3.Acheter un vaisseau " << endl;
        cout << "4.Envoyer en exploration" << endl;
        cout << "0. Quitter" << endl;
        cin >> choix;

        switch (choix) {
            case 1: {
                NovaStation.afficheInfoStation();
                break;
            }
            case 2: {
                auto vaisseaux = NovaStation.getVaisseauDispo();
                if (vaisseaux.empty()) {
                    cout << "Aucun vaisseau dans la station." << endl;
                }
                else {
                    cout << "Nombre total de vaisseau " << vaisseaux.size() << endl;
                    cout << "\nDétails des vaisseaux " << endl;

                    for (size_t i = 0; i < vaisseaux.size(); i++) {
                        cout << (i + 1) << "." << vaisseaux[i]->to_string() << endl;
                    }
                }
                break;
            }    

            case 3: {
                auto newVaisseau = FactoryVaisseau::getRandomVaisseau();
                NovaStation.ajouterVaisseau(newVaisseau);
                cout << "Nouveau vaisseau acheté et ajotuer à la station " << endl;
                cout << "Détails: " << newVaisseau->to_string() << endl;
                break;
            }
            case 4: {
                
            }
            case 0: {
                cout << "Au Revoir" << endl;
            }




        }

        if (choix != 0) {
            cout << "\nAppuyez sur entre pour continuer"; 
            cin.ignore();
            cin.get();
            
        }
    } while (choix != 0);

    return 0;



}

