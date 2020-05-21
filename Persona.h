#ifndef PERSONA_H
#define PERSONA_H



class Persona
{
    private:
        char nombrusu[100];
        char apellusu[100];
        char naciousu[100];
        int edadusu;
    public:
        Persona();
        Persona(char[],char[],char[],int);
        void toString();
};

#endif // PERSONA_H
