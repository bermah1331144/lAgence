

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
    Station novaStation(100, 5);

    novaStation.init();
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
                novaStation.afficheInfoStation();
                break;
            }
            case 2: {
                auto vaisseaux = novaStation.getVaisseauDispo();
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
                novaStation.ajouterVaisseau(newVaisseau);
                cout << "Nouveau vaisseau acheté et ajotuer à la station " << endl;
                cout << "Détails: " << newVaisseau->to_string() << endl;
                break;
            }
            case 4: {
                auto listeDeVaisseau = novaStation.getVaisseauDispo();
                Vaisseau* vaisseauChoisi = listeDeVaisseau[0];
                
                if (vaisseauChoisi != nullptr) {
                    Exploration mission(*vaisseauChoisi);
                    if (!mission.estTerminee()) {
                        int choix = 0;

                        while (!mission.estTerminee() && choix != 2) {
                            cout << "\n Desirez-vous continuer l'Exploration ? " << endl;
                            cout << "1.oui" << endl;
                            cout << "2.non (Rentrer a la base) " << endl;
                                
                            if (choix == 1) {
                                mission.diminuerTour();
                                int ressourceTrouve = mission.getRessources(novaStation);
                            }
                        }
                    }
                    cout << "\n Fin du programme d'Exploration " << endl;

                    return 0;
                }
   


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

