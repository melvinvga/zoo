#ifndef LION
#define LION
#include "animal.h"
#include <iostream>
using namespace std;

class Lion: public Animal
{
    private:
    protected:
    public:
        virtual void annoncerEspece();
        virtual void faireDuBruit();
        void afficher();
        void ajouterLion();
        Lion(string saDdn, string sonNom);
};
#endif