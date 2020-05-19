#include "Persona.h"
#include <iostream>
#include <cstring>

using namespace std;

Persona::Persona()
{

}

Persona::Persona(char nombreusu[100],char apellusu[100],int edadusu,char naciousu[100])
{
    this->nombreusu[100] = nombreusu[100];
    this->apellusu[100] = apellusu[100];
    this->edadusu = edadusu;
    this->naciousu[100] = naciousu[100];

    strcpy(this->nombreusu,nombreusu);
    strcpy(this->apellusu,apellusu);
    strcpy(this->naciousu,naciousu);
}

void Persona::toString()
{
    cout << "+----[DATOS USUARIO]----+" << endl;
    cout << "Nombre: " << this->nombreusu << " " << this->apellusu << endl;
    cout << "Edad: " << this->edadusu << endl;
    cout << "Nacionalidad:" << this->naciousu << endl;
}
