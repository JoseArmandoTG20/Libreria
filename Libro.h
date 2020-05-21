#ifndef LIBRO_H
#define LIBRO_H


class Libro
{
    private:
        char titlib[100];
        int annioli;
        char genelib[100];
        char editlib[100];
        char isbnlib[100];

        char nombraut[100];
        char apellaut[100];
        char naciaut[100];
    public:
        Libro();
        Libro(char[],int,char[],char[],char[],char[],char[],char[]);
        void toString();
};

#endif // LIBRO_H
