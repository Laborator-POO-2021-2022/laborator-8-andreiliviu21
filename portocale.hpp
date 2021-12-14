#ifndef PORTOCALE_HPP
#define PORTOCALE_HPP
#include "aprozar.hpp"


class Portocale: public Aprozar { //pretul final = nr_kilograme/pret_kg 
private:    
    int nr_kilograme; // in kilograme
    int pret_kg;
public:
    Portocale();
    Portocale(int, int);
    int getPret();
    int getKilograme();
    void afisare();
    float getPretFinal();
};

#endif 