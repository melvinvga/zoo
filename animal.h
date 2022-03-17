#ifndef ANIMAL
#define ANIMAL
#include <iostream>
using namespace std;

class Animal
{
private:
    string ddn;
    string nom;
    // les méthodes et propriétés portected sont accessibles depuis la classe et depuis les descendants de cette classe
protected:
    virtual void faireDuBruit() = 0;
    virtual void annoncerEspece() = 0;

public:
    Animal(string saDdn, string sonNom);
    void afficher();
};
#endif