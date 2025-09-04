

#include <iostream>
#include "Vaisseau.h"

int main()
{
    Vaisseau monVaisseau("Paul", 10,10,10,10,10,10);

    std::cout << monVaisseau.to_string()  << std::endl ;
}

