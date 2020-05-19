#include "Prestamo.h"
#include "Persona.h"
#include "Libro.h"

#include <iostream>
#include <cstring>

using namespace std;

Prestamo::Prestamo()
{

}

Prestamo::Prestamo(int diapres,int mespres,int anniopres,int diadev,int mesdev,int anniodev,int estatus)
{

    this->diapres = diapres;
    this->mespres = mespres;
    this->anniopres = anniopres;
    this->diadev = diadev;
    this->mesdev = mesdev;
    this->anniodev = anniodev;
    this->estatus = estatus;


}

void Prestamo::toString()
{
    cout << "+-------[INFORMACION PRESTAMO]-------+" << endl;
    cout << "Fecha de prestamo:" << this->diapres << "/" << this->mespres << "/" << this->anniopres << endl;
    cout << "Fecha de devolucion:" << this->diadev << "/" << this->mesdev << "/" << this->anniodev << endl;
    cout << "Estado:" << this->estatus << endl;

}
