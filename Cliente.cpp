#include "Cliente.hpp"
#include <iostream>

using namespace std;

Cliente::Cliente(const char* nombre, int edad, const char* dni, const char* preferencias)
    : Persona(nombre, edad, dni) {
    int i = 0;
    while (preferencias[i] != '\0' && i < 49) {
        this->preferencias[i] = preferencias[i];
        i++;
    }
    this->preferencias[i] = '\0';
}

void Cliente::mostrarInfo() {
    Persona::mostrarInfo();
    cout << "Preferencias: " << preferencias << endl;
}
