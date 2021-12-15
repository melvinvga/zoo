#include "animal.h"

//constructeur de la classe Animal
Animal::Animal(string saDdn, string sonNom)
{
    nom=sonNom;
    ddn=saDdn;
}

//methode d'affichage de l'animal
void Animal::afficher()
{
    cout<<"je m'appelle "<<nom<<" et je suis né le "<<ddn<<endl;
    faireDuBruit();
    annoncerEspece();
}