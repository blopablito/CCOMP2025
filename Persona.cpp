#include "Persona.h"
#include <iostream>

void copiarCadena(const char* origen, char* destino, int tam) {
    int i = 0;
    while (origen[i] != '\0' && i < tam - 1) {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}

Persona::Persona(const char* nombre, int edad, const char* dni) {
    copiarCadena(nombre, this->nombre, 50);
    this->edad = edad;
    copiarCadena(dni, this->dni, 8);
}

void Persona::mostrarInfo() {
    std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nDNI: " << dni << std::endl;
}
