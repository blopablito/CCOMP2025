#include "Inventario.hpp"
#include <iostream>

using namespace std;

Inventario::Inventario(const char* producto, int cantidad) : cantidad(cantidad) {
    int i = 0;
    while (producto[i] != '\0' && i < 49) {
        this->producto[i] = producto[i];
        i++;
    }
    this->producto[i] = '\0';
}
Inventario::~Inventario()    // Destructor vacío 
}
void Inventario::mostrarInventario() {
    cout << "Producto: " << producto << ", Cantidad: " << cantidad << endl;
}
void Inventario::agregarCantidad(int extra) {
    cantidad += extra;
}
void Inventario::reducirCantidad(int menos) {
    if (cantidad - menos >= 0) {
        cantidad -= menos;
    } else {
        cout << "No hay suficiente producto ." << endl;
    }
}
