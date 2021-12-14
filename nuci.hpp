#ifndef NUCI_HPP
#define NUCI_HPP
#include "aprozar.hpp"


class Nuci: public Aprozar { 
private:    
    int cantitate;
    int pret_100_grame; 
    
public:
    Nuci();
    Nuci(int, int);
    int getPret100();
    float getPretFinal();
    int getCantitate();
    void afisare();
};

#endif 