#include "portocale.hpp"

Portocale::Portocale() {
    nr_kilograme = 0;
    pret_kg = 0;
}

Portocale::Portocale(int kilo, int pret) {
    nr_kilograme = kilo;
    pret_kg = pret;
}



int Portocale::getPret() {
    return pret_kg;
}

int Portocale::getKilograme() {
    return nr_kilograme;
}

float Portocale::getPretFinal() {
    // float final = ;
    return (float) nr_kilograme * pret_kg;
}

void Portocale::afisare() {
    
    std::cout << "Portocale-> " << this->getPretFinal() << " Lei" << std::endl;
}