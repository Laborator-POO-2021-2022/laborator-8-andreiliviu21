#include "banana.hpp"

Banana::Banana() {
    pret_bucata = 0;
    
}

Banana::Banana(int pret_buc) {
    pret_bucata = pret_buc;    
}

void Banana::afisare() {
    
    std::cout << "Banana-> " << pret_bucata << " Lei" << std::endl;
}

float Banana::getPretFinal() {
    return (float)pret_bucata;
}