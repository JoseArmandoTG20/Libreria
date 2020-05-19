#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    private:
        char nombreusu[100];
        char apellusu[100];
        int edadusu;
        char naciousu[100];
    public:
        Persona();
        Persona(char[],char[],int,char[]);
        void toString();

};

#endif // PERSONA_H
