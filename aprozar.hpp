#ifndef APROZAR_HPP
#define APROZAR_HPP
#include <iostream>

class Aprozar {
public:
    virtual float getPretFinal() = 0;
    virtual ~Aprozar();
    virtual void afisare() = 0;
};


#endif