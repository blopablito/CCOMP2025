#include "Empleado.hpp"
#include <iostream>

using namespace std;

int main() {
    Empleado empleado1("Darius", 25, "87654321", "Camarera", 1200);

    cout << "\nInformación del Empleado:" << endl;
    empleado1.mostrarInfo();

    return 0;
}
