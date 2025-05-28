#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
public: //CREO que deberia ser protecte ya se vera
    char nombre[50];
    int edad;
    char dni[8];

public:
    Persona(const char* nombre, int edad, const char* dni); //costructor
    void mostrarInfo();
};
#endif
