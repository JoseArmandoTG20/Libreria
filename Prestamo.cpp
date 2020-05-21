#include "Prestamo.h"
#include "Libro.h"
#include "Persona.h"

#include <iostream>
#include <cstring>

using namespace std;

Prestamo::Prestamo()
{

}

Prestamo::Prestamo(int numusua,int numlibr,char fechIn[100],int estatus)
{
    this->numusua = numusua;
    this->numlibr = numlibr;
    this->fechIn[100] = fechIn[100];

    strcpy(this->fechIn,fechIn);

    this->estatus = 1;
}

void Prestamo::Devolucion(char fechFin[100])
{
    this->fechFin[100] = fechFin[100];

    strcpy(this->fechFin,fechFin);
}

int Prestamo::getUsuario()
{
    return this->numusua;
}

int Prestamo::getLibro()
{
    return this->numlibr;
}

int Prestamo::getEstatus()
{
    return this->estatus;
}

void Prestamo::toString()
{
    cout << "-------[DATOS DE PRESTAMO]-------" << endl;
    cout << "Fecha de Prestamo:" << this->fechIn << endl;

    if(this->estatus == 1)
    {
        cout << "Estado de Prestamo: Ocupado" << endl;
    }
    else
    {
        estatus = 2;
        cout << "Estado de Prestamo: Disponible" << endl;
        cout << "Fecha de Entrega:" << this->fechFin << endl;
    }
}
