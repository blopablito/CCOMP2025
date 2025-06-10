#include <iostream>
#include "Cliente.h"
#include "Trabajador.h"
#include "Inventario.h"

using namespace std;

int main() {
    // Crear un cliente
    Cliente cliente1("Juan Perez", 30, "12345678", "Pizza");
    cout << "=== Información del Cliente ===" << endl;
    cliente1.mostrarInfo();

    cout << endl;
    Trabajador trabajador1("Ana Lopez", 28, "87654321", 3500.50);
    cout << "=== Información del Trabajador ===" << endl;
    trabajador1.mostrarTrabajador();

    cout << endl;
    Inventario inventario;
    inventario.agregarProducto("Harina", 2.50, 20);
    inventario.agregarProducto("Queso", 5.00, 15);

    cout << "\n=== Inventario de Productos ===" << endl;
    inventario.mostrarInventario();

    int totalMateriales = inventario.contarTotalMateriales();
    cout << "\nTotal de materiales en inventario: " << totalMateriales << endl;

    return 0;
}
