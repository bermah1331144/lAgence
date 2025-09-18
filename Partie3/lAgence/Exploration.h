#pragma once
#include <memory>
#include "Vaisseau.h"
#include "Station.h"
#include <string>
class Exploration
{
private:
    int toursRestants;
    int toursInitiaux;
    int ressources;
    int toursPasses;


public:
    Exploration(Vaisseau& vaisseauActuel);
    ~Exploration();
    
    bool estTerminee() const;
    int getToursRestant();
    void diminuerTour();
    int getRessources(Station& laStation);
};

