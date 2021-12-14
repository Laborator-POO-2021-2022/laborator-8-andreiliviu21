#include "Morcovi.hpp"

Morcovi::Morcovi() {
    cantitate = 0;
    pret_100_grame = 0;
}

Morcovi::Morcovi(int cant, int pret_100) {
    cantitate = cant;
    pret_100_grame = pret_100;
}



int Morcovi::getCantitate() {
    return cantitate;
}

int Morcovi::getPret100() {
    return pret_100_grame;
}

float Morcovi::getPretFinal() {
    // float final = 
    return (float)cantitate * pret_100_grame / 100;;
}

void Morcovi::afisare() {
    // std::cout << "Cant Morcovi: " << cantitate << std::endl;
    std::cout << "Morcovi-> " << this->getPretFinal() << " Lei" << std::endl;
}