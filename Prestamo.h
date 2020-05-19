#ifndef PRESTAMO_H
#define PRESTAMO_H


class Prestamo
{
    private:
        int diapres;
        int mespres;
        int anniopres;
        int diadev;
        int mesdev;
        int anniodev;
        int estatus;
    public:
        Prestamo();
        Prestamo(int,int,int,int,int,int,int);
        void toString();
};

#endif // PRESTAMO_H
