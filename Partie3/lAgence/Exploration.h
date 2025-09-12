#pragma once
#include <memory>
#include "Vaisseau.h"
class Exploration
{
private:
    std::shared_ptr<Vaisseau> vaisseau;
    int toursRestants;
    int toursInitiaux;
    int ressources;

public:
    Exploration(std::shared_ptr<Vaisseau> vaisseau);
    ~Exploration();

    int getToursRestant();
    void diminuerTour();
    int getRessources();
};

