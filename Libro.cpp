#include "Libro.h"
#include <iostream>
#include <cstring>

using namespace std;

Libro::Libro()
{

}

Libro::Libro(char titulolib[100],char autorlib[100])
{
    this->titulolib[100] = titulolib[100];
    this->autorlib[100] = autorlib[100];

    strcpy(this->titulolib,titulolib);
    strcpy(this->autorlib,autorlib);
}

void Libro::toString()
{
    cout << "+----[DATOS LIBROS]----+" << endl;
    cout << "Titulo: " << this->titulolib << endl;
    cout << "Autor: " << this->autorlib << endl;
}
