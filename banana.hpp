#ifndef BANANA_HPP
#define BANANA_HPP
#include "aprozar.hpp"


class Banana: public Aprozar {
private:    
    int pret_bucata; 
    
public:
    Banana();
    Banana(int);

    float getPretFinal();
    void afisare();
};

#endif 