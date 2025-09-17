#pragma once
#include <memory>
#include "Vaisseau.h"
class Exploration
{
private:
    int toursRestants;
    int toursInitiaux;
    int ressources;

public:
    Exploration();
    ~Exploration();

    int getToursRestant();
    void diminuerTour();
    int getRessources();
};

