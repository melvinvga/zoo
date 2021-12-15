#include "zebre.h"
#include "elephant.h"
#include "lion.h"
#include <vector>
#include <iostream>
using namespace std;


int main()
{
    char type;
    string date, name;
    vector <Animal*> vectAnimaux;

    //un animal
    Zebre unZebre("15/05/2000","Zozo");
    Zebre unAutreZebre("10/07/2010","Zanzibar");

    //un autre animal
    Elephant unElephant("25/05/2008","Babar");
    Elephant unAutreElephant("05/01/1990","PereCastor");

    //enocre un autre animal
    Lion unLion("25/05/2008","Simba");
    Lion unAutreLion("05/01/1990","Roi");

    //interface de l'application
    cout<<"----- Bonjour bienvenue au ZOO -----"<<endl;
    cout<<"Si vous voulez rentrer un [Z]èbre, tapez 1"<<endl;
    cout<<"Si vous voulez rentrer un [E]léphant, tapez 2"<<endl;
    cout<<"Si vous voulez rentrer un [L]ion, tapez 3"<<endl;
    cout<<"Quelle animaux souhaitez vous rentrez :"<<endl;
    cin>>type;

    //quesion posé à l'utilisateur
    cout<<"Merci de renseigner la date de naissance :"<<endl;
    cin>>date;
    cout<<"Merci de rentrer le nom de l'animal :"<<endl;
    cin>>name;

    //switch des possibilitées de l'utilisateur
    switch(type) 
    {
    case 'Z':
        cout<<"vous avez choisie le zèbre"<<endl;
        cout<<""<<endl;
        vectAnimaux.push_back(new Zebre(date,name));
        break;


    case 'E':
        cout<<"vous avez choisie l'éléphant"<<endl;
        cout<<""<<endl;
        vectAnimaux.push_back(new Elephant(date,name));
        break;


    case 'L':
        cout<<"vous avez choisie le lion"<<endl;
        cout<<""<<endl;
        vectAnimaux.push_back(new Lion(date,name));
        break;
    }
    
    //ajouter les animaux au vecteur puis l'afficher
    vectAnimaux.push_back(&unZebre);
    vectAnimaux.push_back(&unAutreZebre);    
    vectAnimaux.push_back(&unElephant);
    vectAnimaux.push_back(&unAutreElephant);
    vectAnimaux.push_back(&unLion);
    vectAnimaux.push_back(&unAutreLion);

    for(int no=0;no<vectAnimaux.size();no++)
    {
        vectAnimaux[no]->afficher();
    }
}