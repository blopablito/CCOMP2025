#ifndef PERSONA_H
#define PERSONA_H

class Persona {
protected:
    char nombre[50];
    int edad;
    char dni[8];

public:
    Persona(const char* nombre, int edad, const char* dni);
    void mostrarInfo();
};

void copiarCadena(const char* origen, char* destino, int tam);

#endif
