#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "Libro.h"
#include "Persona.h"

class Prestamo
{
    private:
        int numusua;
        int numlibr;
        char fechIn[100];
        char fechFin[100];
        int estatus;
    public:
        Prestamo();
        Prestamo(int,int,char[],int);
        void Devolucion (char[]);
        int getUsuario();
        int getLibro();
        int getEstatus();
        void toString();


};

#endif // PRESTAMO_H
