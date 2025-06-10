#include "Trabajador.h"
#include <iostream>

Trabajador::Trabajador(const char* nombre, int edad, const char* dni, double salario)
    : Persona(nombre, edad, dni), salario(salario) {}

bool Trabajador::verificarTrabajador(const char* dniTrabajador) {
    int i = 0;
    while (dniTrabajador[i] != '\0' && dni[i] != '\0') {
        if (dniTrabajador[i] != dni[i]) {
            return false;
        }
        i++;
    }
    return (dniTrabajador[i] == '\0' && dni[i] == '\0');
}

void Trabajador::mostrarTrabajador() {
    std::cout << "Trabajador: " << nombre << "\nEdad: " << edad << "\nDNI: " << dni << "\nSalario: " << salario << std::endl;
}
