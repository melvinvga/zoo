#include "lion.h"
#include <iostream>
using namespace std;

// constructeur de la classe Lion
Lion::Lion(string saDdn, string sonNom) : Animal(saDdn, sonNom)
{
    // rien a faire ici
}

// message affiché a l'utilisateur
void Lion::annoncerEspece()
{
    cout << "je suis un lion" << endl;
}

// message affiché a l'utilisateur
void Lion::faireDuBruit()
{
    cout << "je rugit" << endl;
}

// methode d'affichage de l'animal
void Lion::afficher()
{
    Animal::afficher();
}

void Lion::ajouterLion()
{
    // rien a faire ici
}