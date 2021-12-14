// #include "aprozar.hpp"
#include "banana.hpp"
#include "morcovi.hpp"
#include "nuci.hpp"
#include "portocale.hpp"
#include <cstring>
#include <typeinfo>

int main() {
    
    Aprozar** shoplist = new Aprozar * [10];
    
    double pret_final(0);

    shoplist[0] = new Nuci(1403, 3);
    shoplist[1] = new Banana(7);
    shoplist[2] = new Portocale(2, 6);
    shoplist[3] = new Portocale(7, 7);
    shoplist[4] = new Morcovi(1060, 3);
    shoplist[5] = new Nuci(600, 2);
    shoplist[6] = new Banana(10);
    shoplist[7] = new Banana(8);
    shoplist[8] = new Portocale(33, 4);
    shoplist[9] = new Nuci(220, 11);

    for (int i = 0; i < 10; i++) {
        shoplist[i]->afisare();
    }

    for (int i = 0; i < 10; i++) {
        pret_final  = pret_final + shoplist[i]->getPretFinal();
    }
    std::cout << "Pretul total al alimentelor este: " << pret_final << " Lei" << '\n';
    std::cout << '\n';
    
    Aprozar** sortat = new Aprozar * [10];
    
    

    std::cout << "Vector sortat: \n";
    
    
    int contor = 0;
    for (int i = 0; i < 10; i++) {
        if (strcmp("class Banana", typeid(*shoplist[i]).name()) == 0) {
            sortat[contor] = shoplist[i];
            contor++;
        }
        
    }

    
    for (int i = 0; i < 10; i++) {
        
        if (strcmp("class Portocale", typeid(*shoplist[i]).name()) == 0) {
            sortat[contor] = shoplist[i];
            contor++;
        }
    }

   
    for (int i = 0; i < 10; i++) {
        
        if (strcmp("class Morcovi", typeid(*shoplist[i]).name()) == 0) {
            sortat[contor] = shoplist[i];
            contor++;
        }
    }

   
    for (int i = 0; i < 10; i++) {
        
        if (strcmp("class Nuci", typeid(*shoplist[i]).name()) == 0) {
            sortat[contor] = shoplist[i];
            contor++;
        }
    }
    

    for (int i = 0; i < 10; i++) {
        sortat[i]->afisare();
    }

    float suma_portocale = 0;
    for (int i = 0; i < 10; i++) {
        if (strcmp("class Portocale", typeid(*shoplist[i]).name()) == 0) {
            suma_portocale = suma_portocale + shoplist[i]->getPretFinal();
        }
    }
    std::cout << "\nSuma portocale: " << suma_portocale << " Lei" << std::endl;
    
    for (int i = 0; i < 10; i++) {
        delete shoplist[i];
        //delete sortat[i];

    }
    delete[] shoplist;
    delete[] sortat;
    
    return 0;
}
