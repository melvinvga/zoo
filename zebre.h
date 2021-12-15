#ifndef ZEBRE
#define ZEBRE
#include "animal.h" 
#include <iostream>
using namespace std;

class Zebre: public Animal
{
    private:
    protected:
    public:
        virtual void annoncerEspece();
        virtual void faireDuBruit();
        void afficher();
        void ajouterZebre();
        Zebre(string saDdn, string sonNom);
};
#endif