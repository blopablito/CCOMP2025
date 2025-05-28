#include "Cliente.hpp"
#include "Empleado.hpp"
#include <iostream>

using namespace std;

int main() {
    Cliente cliente1("Juan Perez", 30, "12345678", "Pizza");
    Empleado empleado1("Ana Garcia", 25, "87654321", "Camarera", 1200);

    cout << "Información del Cliente:" << endl;
    cliente1.mostrarInfo();

    cout << "\nInformación del Empleado:" << endl;
    empleado1.mostrarInfo();

    return 0;
}
