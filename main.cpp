#include <iostream>
#include <stdlib.h>

#include "Libro.h"
#include "Persona.h"
#include "Prestamo.h"

using namespace std;

Libro registroLib()
{
    char titlib[100];
    int annioli;
    char genelib[100];
    char editlib[100];
    char isbnlib[100];

    char nombraut[100];
    char apellaut[100];
    char naciaut[100];

    cout << "-------[REGISTRO LIBRO]-------" << endl;
    cout << "Titulo:";
    cin >> titlib;
    cout << "Annio:";
    cin >> annioli;
    cout << "Genero:";
    cin >> genelib;
    cout << "Editorial:";
    cin >> editlib;
    cout << "ISBN:";
    cin >> isbnlib;
    cout << "-------[REGISTRO AUTOR]-------" << endl;
    cout << "Nombre:";
    cin >> nombraut;
    cout << "Apellido:";
    cin >> apellaut;
    cout << "Nacionalidad:";
    cin >> naciaut;
    cout << "----------------------------" << endl;
    return Libro(titlib,annioli,genelib,editlib,isbnlib,nombraut,apellaut,naciaut);
}

Persona registroUsu()
{
    char nombrusu[100];
    char apellusu[100];
    char naciousu[100];
    int edadusu;

    cout << "-------[REGISTRO USUARIO]-------" << endl;
    cout << "Nombre:";
    cin >> nombrusu;
    cout << "Apellido:";
    cin >> apellusu;
    cout << "Edad:";
    cin >> edadusu;
    cout << "Nacionalidad:";
    cin >> naciousu;
    cout << "--------------------------------" << endl;

    return Persona(nombrusu,apellusu,naciousu,edadusu);
}

Prestamo registroPres(int numlibr)
{
    int numusua;

    char fechIn[100];
    int estatus = 0;


    cout << "Numero de Usuario:";
    cin >> numusua;
    cout << "Ingresa la Fecha de Prestamo:";
    cin >> fechIn;
    estatus = 1;
    return Prestamo(numusua,numlibr,fechIn,estatus);
}


void listaLibros(Libro libros[10], int conlib)
{
    for(int l = 0; l < conlib; l++)
    {
        cout << "-------[LIBRO " << l <<"]-------" << endl;
        libros[l].toString();
        cout << "--------------------------------" << endl;
    }
}

void menuPrinci()
{
    cout << "+----[MENU PRINCIPAL]----+" << endl;
    cout << "|    1.-Usuarios.        |" << endl;
    cout << "|    2.-Libros.          |" << endl;
    cout << "|    3.-Prestamos.       |" << endl;
    cout << "+------------------------+" << endl;
}

void menuLibro()
{
    cout << "+--------[MENU LIBRO]--------+" << endl;
    cout << "| 1.-Registrar.              |" << endl;
    cout << "| 2.-Editar.                 |" << endl;
    cout << "| 3.-Consultar Informacion.  |" << endl;
    cout << "| 4.-Eliminar.               |" << endl;
    cout << "| 5.-Menu Principal.         |" << endl;
    cout << "+----------------------------+" << endl;
}

void menuUsu()
{
    cout << "+-----[MENU USUARIO]-----+" << endl;
    cout << "|     1.-Registrar.      |" << endl;
    cout << "|     2.-Editar.         |" << endl;
    cout << "|     3.-Consultar.      |" << endl;
    cout << "|     4.-Eliminar.       |" << endl;
    cout << "|   5.-Menu Principal.   |" << endl;
    cout << "+-------------------- ---+" << endl;
}

void menuPres()
{
    cout << "+-----[MENU PRESTAMO]-----+" << endl;
    cout << "|  1.-Realizar Prestamo.  |" << endl;
    cout << "|  2.-Devolver Libro.     |" << endl;
    cout << "|  3.-Consultar Prestamo. |" << endl;
    cout << "|  4.-Menu Principal.     |" << endl;
    cout << "+-------------------------+" << endl;
}

int main()
{
    int opcm = 0;
    int opcUsu = 0;
    int opcLib = 0;
    int opcPres = 0;
    int conlib = 0;
    int conusu = 0;
    int conpres = 0;
    int numlibr = 0;

    char fechFin[100];

    bool sistema = true;
    bool repUsu = true;
    bool repLib = true;
    bool repPres = true;
    bool pre = true;

    Libro libros[10];
    Persona usua[10];
    Prestamo prest[100];

    while(sistema== true)
    {
        menuPrinci();
        cout << "Opcion:";
        cin >> opcm;

        switch(opcm)
        {
            case 1:
                
                repUsu = true;
                
                while(repUsu == true)
                {
                    menuUsu();
                    cout << "Opcion:";
                    cin >> opcUsu;

                    switch(opcUsu)
                    {
                        case 1:
                            usua[conusu] = registroUsu();
                            cout << "Numero de Usuario:" << conusu << endl;
                            conusu ++;
                            cout << "-------[USUARIO REGISTRADO]-------" << endl;
                        break;

                        case 2:
                            cout << "-------[EDITAR USUARIO]-------" << endl;
                            cout << "Ingresa el Numero de Usuario a editar:";
                            cin >> conusu;

                            usua[conusu].toString();

                            usua[conusu] = registroUsu();

                            cout << "-------[USUARIO EDITADO]-------" << endl;
                        break;

                        case 3:
                            cout << "-------[CONSULTAR USUARIO]-------" << endl;
                            cout << "Ingresa el Numero de Usuario:";
                            cin >> conusu;

                            usua[conusu].toString();

                            cout << "---------------------------------" << endl;
                        break;

                        case 4:
                            cout << "-------[ELIMINAR USUARIO]-------" << endl;
                            cout << "Ingresa el Numero de Usuario a eliminar:";
                            cin >> conusu;

                            usua[conusu].toString();

                            usua[conusu] = Persona();

                            cout << "-------[USUARIO ELIMINADO]-------" << endl;
                        break;

                        case 5:
                            repUsu = false;
                        break;
                    }
                }
            break;

            case 2:
                
                repLib = true;
               
                while(repLib == true)
                {
                    menuLibro();
                    cout << "Opcion:";
                    cin >> opcLib;
                    switch(opcLib)
                    {
                        case 1:
                            libros[conlib] = registroLib();
                            cout << "Numero de Libro:" << conlib << endl;
                            conlib ++;
                            cout << "-------[LIBRO REGISTRADO]-------" << endl;
                        break;

                        case 2:
                            cout << "-------[EDITAR LIBRO]-------" << endl;
                            listaLibros(libros,conlib);
                            cout << "Que Libro desea editar:";
                            cin >> conlib;
                            libros[conlib] = registroLib();
                            cout << "-------[LIBRO EDITADO]-------" << endl;
                        break;

                        case 3:
                            cout << "-------[CONSULTAR LIBRO]-------" << endl;
                            listaLibros(libros,conlib);
                            cout << "Que libro desea consultar:";
                            cin >> conlib;

                            libros[conlib].toString();
                        break;

                        case 4:
                            cout << "-------[ELIMINAR LIBRO]-------" << endl;
                            listaLibros(libros,conlib);
                            cout << "Que libro desea eliminar:";
                            cin >> conlib;
                            libros[conlib].toString();
                            libros[conlib] = Libro();
                            cout << "-------[LIBRO ELIMINADO]-------" << endl;
                        break;

                        case 5:
                            repLib = false;
                        break;
                    }
                }
            break;

            case 3:
                
                repPres = true;
                
                while(repPres == true)
                {
                    menuPres();
                    cout << "Opcion:";
                    cin >> opcPres;

                    switch(opcPres)
                    {
                        case 1:
                            listaLibros(libros,conlib);

                            cout << "-------[REGISTRO DE PRESTAMO]-------" << endl;
                            cout << "Numero de Libro:";
                            cin >> numlibr;

                            pre = true;

                            for(int q = 0; q < conpres; q++)
                            {
                                if(numlibr == prest[q].getLibro() && prest[q].getEstatus() == 1)
                                {
                                    pre = false;

                                }
                            }

                            if(pre == true)
                            {
                                prest[conpres] = registroPres(numlibr);
                                cout << "Numero de Prestamo:" << conpres << endl;
                                conpres ++;
                                cout << "-------[SE TE HA PRESTADO EL LIBRO]-------" << endl;
                            }
                            else
                            {
                                cout << "-------[ESTE LIBRO HA SIDO PRESTADO]-------" << endl;
                            }
                        break;

                        case 2:
                            cout << "-------[REGISTRO DE DEVOLUCION]-------" << endl;
                            cout << "Ingresa el Numero de Prestamo:";
                            cin >> conpres;

                            usua[prest[conpres].getUsuario()].toString();

                            libros[prest[conpres].getLibro()].toString();

                            if(prest[conpres].getEstatus() == 1)
                            {
                                cout << "Ingresa la Fecha de Entrega:";
                                cin >> fechFin;

                                prest[conpres].Devolucion(fechFin);

                                cout << "-------[HAS DEVUELTO ESTE LIBRO]-------" << endl;
                            }
                            else
                            {
                                cout << "-------[ESTE LIBRO HA SIDO DEVUELTO ANTERIORMENTE]-------" << endl;
                            }
                        break;

                        case 3:
                            cout << "-------[CONSULTAR PRESTAMO]-------" << endl;
                            cout << "Ingresa el Numero de Prestamo:";
                            cin >> conpres;

                            usua[prest[conpres].getUsuario()].toString();

                            libros[prest[conpres].getLibro()].toString();

                            prest[conpres].toString();
                        break;

                        case 4:
                            repPres = false;
                        break;
                    }
                }
            break;

            default:
                sistema = false;
                cout << "-------[VUELVA PRONTO]-------" << endl;
            break;
        }
    }

    return 0;
}
