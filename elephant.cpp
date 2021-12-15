#include "elephant.h"
#include <iostream>
using namespace std;

//constructeur de la classe Elephant
Elephant::Elephant(string saDdn, string sonNom):Animal(saDdn,sonNom)
{
    //rien a faire ici
}

//message affiché a l'utilisateur
void Elephant::annoncerEspece()
{
    cout<<"je suis un éléphant"<<endl;
}

//message affiché a l'utilisateur
void Elephant::faireDuBruit()
{
    cout<<"je barrit"<<endl;
}

//methode d'affichage de l'animal
void Elephant::afficher()
{
    Animal::afficher();
}

void Elephant::ajouterElephant()
{
    //rien a faire ici
}
