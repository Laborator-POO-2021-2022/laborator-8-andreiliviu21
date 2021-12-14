#include "nuci.hpp"

Nuci::Nuci() {
    cantitate = 0;
    pret_100_grame = 0;
}

Nuci::Nuci(int cant, int pret_100) {
    cantitate = cant;
    pret_100_grame = pret_100;
}



int Nuci::getCantitate() {
    return cantitate;
}

int Nuci::getPret100() {
    return pret_100_grame;
}

float Nuci::getPretFinal() {
    // float final = 
    return (float)cantitate * pret_100_grame / 100;;
}

void Nuci::afisare() {
    
    std::cout << "Nuci-> " << this->getPretFinal() << " Lei" << std::endl;
}