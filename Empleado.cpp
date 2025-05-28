#include "Empleado.hpp"
#include <iostream>

using namespace std;

Empleado::Empleado(const char* nombre, int edad, const char* dni, const char* puesto, double salario):Persona(nombre, edad, dni), salario(salario) {
    int i = 0;
    while (puesto[i] != '\0' && i < 49) {
        puesto[i] = puesto[i];
        i++;
    }
    puesto[i] = '\0'; // ver sin this
}

void Empleado::mostrarInfo() {
    Persona::mostrarInfo();
    cout << "Puesto: " << puesto << ", Salario: " << salario << endl;
}
