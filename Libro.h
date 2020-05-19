#ifndef LIBRO_H
#define LIBRO_H


class Libro
{
    private:
        char titulolib[100];
        char autorlib[100];
    public:
        Libro();
        Libro(char[],char[]);
        void toString();
        void listaLib();
};

#endif // LIBRO_H
