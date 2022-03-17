#include "zebre.h"
#include <iostream>
using namespace std;

// constructeur de la classe Zebre
Zebre::Zebre(string saDdn, string sonNom) : Animal(saDdn, sonNom)
{
    // rien a faire ici
}

// message affiché a l'utilisateur
void Zebre::annoncerEspece()
{
    cout << "je suis un zèbre" << endl;
}

// message affiché a l'utilisateur
void Zebre::faireDuBruit()
{
    cout << "je hennis" << endl;
}

// methode d'affichage de l'animal
void Zebre::afficher()
{
    Animal::afficher();
}

void Zebre::ajouterZebre()
{
    // rien a faire ici
}