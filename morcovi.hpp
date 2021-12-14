#ifndef MORCOVI_HPP
#define MORCOVI_HPP
#include "aprozar.hpp"


class Morcovi: public Aprozar { 
private:    
    int cantitate;
    int pret_100_grame; 
    
public:
    Morcovi();
    Morcovi(int, int);
    int getPret100();
    int getCantitate();
    float getPretFinal();
    void afisare();
};

#endif 