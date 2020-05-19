#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

#include "Libro.h"
#include "Persona.h"
#include "Prestamo.h"

using namespace std;

Libro registro()
{
    char titulolib[100];
    char autorlib[100];

    cin.ignore();

    cout << "Titulo: ";
    cin >> titulolib;
    cout << "Autor: ";
    cin >> autorlib;

    return Libro(titulolib,autorlib);
}

Persona registrousu()
{
    char nombreusu[100];
    char apellusu[100];
    int edadusu;
    char naciousu[100];

    cin.ignore();

    cout << "Nombre:";
    cin >> nombreusu;
    cout << "Apellido:";
    cin >> apellusu;
    cout << "Edad:";
    cin >> edadusu;
    cout << "Nacionalidad:";
    cin >> naciousu;

    return Persona(nombreusu,apellusu,edadusu,naciousu);
}

Prestamo registropres()
{
    int diapres;
    int mespres;
    int anniopres;
    int diadev = 0;
    int mesdev = 0;
    int anniodev = 0;
    int estatus;

    cin.ignore();

    cout << "+-------[FECHA DE PRESTAMO]-------+" << endl;
    cout << "Dia:";
    cin >> diapres;
    cout << "Mes:";
    cin >> mespres;
    cout << "Annio:";
    cin >> anniopres;
    cout << "1.-Prestado / 2.-Disponible" << endl;
    cout << "Estado:";
    cin >> estatus;

    return Prestamo(diapres,mespres,anniopres,diadev,mesdev,anniodev,estatus);
}

Prestamo registrodevo()
{
    int diapres = 0;
    int mespres = 0;
    int anniopres = 0;
    int diadev;
    int mesdev;
    int anniodev;
    int estatus;

    cin.ignore();

    cout << "+-------[FECHA DE DEVOLUCION]-------+" << endl;
    cout << "Dia:";
    cin >> diadev;
    cout << "Mes:";
    cin >> mesdev;
    cout << "Annio:";
    cin >> anniodev;
    cout << "1.-Prestado / 2.-Disponible" << endl;
    cout << "Estado:";
    cin >> estatus;
    return Prestamo(diapres,mespres,anniopres,diadev,mesdev,anniodev,estatus);
}

void menu()
{
    cout << "+---[MENU PRINCIPAL]---+" << endl;
    cout << "|   1.-Usuarios.       |" << endl;
    cout << "|   2.-Libros.         |" << endl;
    cout << "|   3.-Prestamos.      |" << endl;
    cout << "+----------------------+" << endl;
}

int main()
{
    int opc = 0;
    int canlib = 0;
    int conlib = 0;
    int conusu = 0;
    int conpres = 0;

    bool sistema = true;
    bool mensu = false;
    bool menlib = true;
    bool menpres = false;

    Libro lib[10];

    Persona usu[10];

    Prestamo pres[100];
    while(sistema == true)
    {
        menu();
        cout << "Opcion:";
        cin >> opc;

        switch(opc)
        {
            while(mensu == false)
            {
                case 1:
                    cout << "+---[MENU USUARIOS]---+" << endl;
                    cout << "|   1.-Registrar.     |" << endl;
                    cout << "|   2.-Editar.        |" << endl;
                    cout << "|   3.-Consultar.     |" << endl;
                    cout << "|   4.-Eliminar.      |" << endl;
                    cout << "|   5.-Menu Principal |" << endl;
                    cout << "+---------------------+" << endl;
                    cout << "Opcion:";
                    cin >> opc;

                    switch(opc)
                    {
                        case 1:
                            cout << "+----[REGISTRAR USUARIO]----+" << endl;
                            usu[conusu] = registrousu();
                            cout << "Numero de Usuario: " << conusu << endl;
                            conusu ++;
                        break;

                        case 2:
                            cout << "+----[EDITAR USUARIO]----+" << endl;
                            cout << "Ingresa el numero usuario que desea editar:";
                            cin >> conusu;

                            usu[conusu] = registrousu();
                        break;

                        case 3:
                            cout << "+----[DATOS USUARIO]----+" << endl;
                            cout << "Ingresa el numero usuario:";
                            cin >> conusu;

                            usu[conusu].toString();
                        break;

                        case 4:
                            cout << "+----[ELIMINAR USUARIO]----+" << endl;
                            cout << "Ingresa el numero de usuario a eliminar:";
                            cin >> conusu;

                            usu[conusu] = Persona();

                            cout << "-------[USUARIO ELIMINADO]-------" << endl;
                        break;

                        case 5:
                            mensu = true;
                        break;
                    }
                }

            break;
            while(menlib == true)
            {
                case 2:
                    cout << "+----[MENU LIBROS]----+" << endl;
                    cout << "|   1.-Registrar.     |" << endl;
                    cout << "|   2.-Editar.        |" << endl;
                    cout << "|   3.-Consultar.     |" << endl;
                    cout << "|   4.-Eliminar.      |" << endl;
                    cout << "|   5.-Menu Principal |" << endl;
                    cout << "+---------------------+" << endl;
                    cout << "Opcion:";
                    cin >> opc;

                    switch(opc)
                    {
                        case 1:
                            cout << "+-------[LIBROS]-------+" << endl;
                            cout << "Cuantos libros desea capturar: ";
                            cin >> canlib;

                            for(int a = 0; a < canlib; a++)
                            {
                                cout << "-------[LIBRO "<< a <<"]-------" << endl;
                                lib[conlib] = registro();
                                conlib ++;
                                cout << "" << endl;
                            }

                            cout << "-------[LIBRO REGISTRADO]-------" << endl;
                        break;

                        case 2:
                            cout << "-------[EDITAR LIBRO]-------" << endl;
                            cout << "Ingresa el libro a editar:";
                            cin >> conlib;

                            lib[conlib] = registro();

                            cout << "-------[LIBRO EDITADO]-------" << endl;
                        break;

                        case 3:
                            cout << "-------[CONSULTAR LIBRO]-------" << endl;
                            cout << "Libro:";
                            cin >> conlib;

                            lib[conlib].toString();
                        break;

                        case 4:
                            cout << "-------[ELIMINAR LIBRO]-------" << endl;
                            cout << "Ingresa el libro que desea eliminar:";
                            cin >> conlib;

                            lib[conlib] = Libro();

                            cout << "-------[LIBRO ELIMINADO]-------" << endl;
                        break;

                        case 5:
                            menlib = false;
                        break;
                }
            }
            break;

            while(menpres == false)
            {
                case 3:
                    cout << "+-----[MENU PRESTAMOS]-----+" << endl;
                    cout << "|1.-Realizar Prestamo.     |" << endl;
                    cout << "|2.-Devolver Libro.        |" << endl;
                    cout << "|3.-Consultar Prestamo.    |" << endl;
                    cout << "|4.-Menu Principal.        |" << endl;
                    cout << "+--------------------------+" << endl;
                    cout << "Opcion:";
                    cin >> opc;

                    switch(opc)
                    {
                        case 1:
                            cout << "+-------[PRESTAMO]-------+" << endl;
                            cout << "Que libro desea llevar? " << endl;
                            cout << "Libro:";
                            cin >> canlib;
                            lib[canlib].toString();
                            cout << "Numero de Usuario:";
                            cin >> conusu;
                            usu[conusu].toString();
                            pres[conpres] = registropres();
                            conpres ++;
                            cout << "+-------[SE TE HA PRESTADO EL LIBRO]-------+" << endl;
                        break;

                        case 2:
                            cout << "+-------[DEVOLVER LIBRO]-------+" << endl;
                            cout << "Que libro desea regresar? " << endl;
                            cout << "Libro:";
                            cin >> canlib;
                            lib[canlib].toString();
                            cout << "Numero de Usuario:";
                            cin >> conusu;
                            usu[conusu].toString();
                            pres[conpres] = registrodevo();
                            conpres ++;
                        break;

                        case 3:
                            cout << "+-------[CONSULTAR PRESTAMO]-------+" << endl;
                            cout << "Ingresa el numero de prestamo:";
                            cin >> conpres;
                            pres[conpres].toString();
                        break;

                        case 4:
                            menpres = true;
                        break;
                    }
                break;
            }
            default:
                sistema = false;
            break;
        }
    }
    return 0;
}
