#include <iostream>
#include "Proyectos.h"
#include "Persona.h" // Para usar copiarCadena

using namespace std;

Productos::Productos() {
    nombre[0] = '\0'; // Inicialización segura
    precioUnidad = 0.0;
    cantidadMateriales = 0;
}

Productos::Productos(const char* nombre, double precioUnidad, int cantidadMateriales)
    : precioUnidad(precioUnidad), cantidadMateriales(cantidadMateriales) {
    copiarCadena(nombre, this->nombre, 50);
}

void Productos::mostrarProductos() const {
    cout << "Producto: " << nombre
         << "\nPrecio por unidad: " << precioUnidad
         << "\nCantidad de materiales requeridos: " << cantidadMateriales << endl;
}

const char* Productos::getNombre() const {
    return nombre;
}

double Productos::getPrecio() const {
    return precioUnidad;
}

int Productos::getCantidad() const {
    return cantidadMateriales;
}
