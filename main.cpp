#include "Cliente.hpp"
#include "Empleado.hpp"
#include <iostream>

using namespace std;

int main() {
    Cliente cliente1("Arroe Calle", 30, "12345678", "Comida noxiana");
    Empleado empleado1("Darius", 25, "87654321", "Camarera", 1200);

    cout << "Información del Cliente:" << endl;
    cliente1.mostrarInfo();

    cout << "\nInformación del Empleado:" << endl;
    empleado1.mostrarInfo();

    return 0;
}
