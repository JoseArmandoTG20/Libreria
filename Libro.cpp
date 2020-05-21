#include "Libro.h"

#include <iostream>
#include <cstring>

using namespace std;

Libro::Libro()
{
    //ctor
}

Libro::Libro(char titlib[],int annioli,char genelib[],char editlib[],char isbnlib[],char nombraut[],char apellaut[],char naciaut[])
{
    this->titlib[100] = titlib[100];
    this->annioli = annioli;
    this->genelib[100] = genelib[100];
    this->editlib[100] = editlib[100];
    this->isbnlib[100] = isbnlib[100];

    this->nombraut[100] = nombraut[100];
    this->apellaut[100] = apellaut[100];
    this->naciaut[100] = naciaut[100];

    strcpy(this->titlib,titlib);
    strcpy(this->genelib,genelib);
    strcpy(this->editlib,editlib);
    strcpy(this->isbnlib,isbnlib);

    strcpy(this->nombraut,nombraut);
    strcpy(this->apellaut,apellaut);
    strcpy(this->naciaut,naciaut);
}

void Libro::toString()
{
    cout << "-------[DATOS DEL LIBRO]-------" << endl;
    cout << "Titulo:" << this->titlib << endl;
    cout << "Annio:" << this->annioli << endl;
    cout << "Genero:" << this->genelib << endl;
    cout << "Editorial:" << this->editlib << endl;
    cout << "ISBN:" << this->isbnlib << endl;
    cout << "-------[DATOS DEL AUTOR]-------" << endl;
    cout << "Nombre:" << this->nombraut << " " << this->apellaut << endl;
    cout << "Nacionalidad:" << this->naciaut << endl;

}
