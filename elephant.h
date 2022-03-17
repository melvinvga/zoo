#ifndef ELEPHANT
#define ELEPHANT
#include "animal.h"
#include <iostream>
using namespace std;

class Elephant : public Animal
{
private:
protected:
public:
    virtual void annoncerEspece();
    virtual void faireDuBruit();
    void afficher();
    void ajouterElephant();
    Elephant(string saDdn, string sonNom);
};
#endif