#include <iostream>
#include "Cliente.h"
#include "Persona.h"

using namespace std;

Cliente::Cliente(const char* nombre, int edad, const char* dni, const char* pedido)
    : Persona(nombre, edad, dni) {
    copiarCadena(pedido, Pedido, 50); // copia "pedido" en "Pedido"
}

void Cliente::mostrarInfo() {
    Persona::mostrarInfo();
    cout << "Pedido: " << Pedido << endl;
