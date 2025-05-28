#include "Persona.hpp"
#include <iostream>

using namespace std;

Persona::Persona(const char* nombre, int edad, const char* dni) : edad(edad) {
    int i = 0;
    while (nombre[i] != '\0' && i < 49) {
        this->nombre[i] = nombre[i];
        i++;
    }
    this->nombre[i] = '\0';

    i = 0;
    while (dni[i] != '\0' && i < 9) {
        this->dni[i] = dni[i];
        i++;
    }
    this->dni[i] = '\0';
}

void Persona::mostrarInfo() {
    cout << "Nombre: " << nombre << ", Edad: " << edad << ", DNI: " << dni << endl;
}
