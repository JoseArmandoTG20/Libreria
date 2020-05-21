#include "Persona.h"

#include <iostream>
#include <cstring>

using namespace std;

Persona::Persona()
{

}

Persona::Persona(char nombrusu[100],char apellusu[100],char naciousu[100], int edadusu)
{
    this->nombrusu[100] = nombrusu[100];
    this->apellusu[100] = apellusu[100];
    this->naciousu[100] = naciousu[100];
    this->edadusu = edadusu;

    strcpy(this->nombrusu,nombrusu);
    strcpy(this->apellusu,apellusu);
    strcpy(this->naciousu,naciousu);
}

void Persona::toString()
{
    cout << "-------[DATOS DEL USUARIO]-------" << endl;
    cout << "Nombre:" << this->nombrusu << " " << this->apellusu << endl;
    cout << "Edad:" << this->edadusu << endl;
    cout << "Nacionalidad:" << this->naciousu << endl;
}
