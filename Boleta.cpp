#include "Boleta.hpp"
#include <iostream>

Boleta::Boleta(const char* nombreEmpresa, const char* RUC, const char* ubicacionCompra) {
    // Copiar valores en los atributos (evitar uso de string)
    int i = 0;
    while (nombreEmpresa[i] != '\0' && i < 49) {
        this->nombreEmpresa[i] = nombreEmpresa[i];
        i++;
    }
    this->nombreEmpresa[i] = '\0';

    i = 0;
    while (RUC[i] != '\0' && i < 19) {
        this->RUC[i] = RUC[i];
        i++;
    }
    this->RUC[i] = '\0';

    i = 0;
    while (ubicacionCompra[i] != '\0' && i < 49) {
        this->ubicacionCompra[i] = ubicacionCompra[i];
        i++;
    }
    this->ubicacionCompra[i] = '\0';

    numProductos = 0;
    totalPrecio = 0;
    vuelto = 0;
}

void Boleta::guardarRegistro(const char* nombreCliente, const char* dni, const char* formaPago, Producto productos[], int cantidadProductos, double total, double pago) {
    int i = 0;
    
    while (nombreCliente[i] != '\0' && i < 49) {
        this->nombreCliente[i] = nombreCliente[i];
        i++;
    }
    this->nombreCliente[i] = '\0';

    i = 0;
    while (dni[i] != '\0' && i < 9) {
        this->dniCliente[i] = dni[i];
        i++;
    }
    this->dniCliente[i] = '\0';

    i = 0;
    while (formaPago[i] != '\0' && i < 19) {
        this->formaPago[i] = formaPago[i];
        i++;
    }
    this->formaPago[i] = '\0';

    // Copiar productos
    numProductos = cantidadProductos;
    for (int j = 0; j < cantidadProductos && j < 10; j++) {
        this->productos[j] = productos[j];
    }

    totalPrecio = total;
    vuelto = pago - total;
    
    // Simulación de fecha y hora manual
    fechaHora[0] = 'D'; fechaHora[1] = 'D';
    fechaHora[2] = '/';
    fechaHora[3] = 'M'; fechaHora[4] = 'M';
    fechaHora[5] = '/';
    fechaHora[6] = 'Y'; fechaHora[7] = 'Y'; fechaHora[8] = 'Y'; fechaHora[9] = 'Y';
    fechaHora[10] = ' ';
    fechaHora[11] = 'H'; fechaHora[12] = 'H';
    fechaHora[13] = ':'; 
    fechaHora[14] = 'M'; fechaHora[15] = 'M';
    fechaHora[16] = '\0';  
}

void Boleta::imprimirBoleta() {
    std::cout << "------------------- BOLETA DE COMPRA -------------------\n";
    std::cout << "Empresa: " << nombreEmpresa << "\nRUC: " << RUC << "\nUbicación: " << ubicacionCompra << "\nFecha y Hora: " << fechaHora << "\n";
    std::cout << "\nCliente: " << nombreCliente << "\nDNI: " << dniCliente << "\nForma de Pago: " << formaPago << "\n";
    std::cout << "-------------------------------------------------------\n";
    
    std::cout << "Producto\tCantidad\tPrecio\n";
    std::cout << "-------------------------------------------------------\n";
    
    for (int i = 0; i < numProductos; i++) {
        std::cout << productos[i].getNombre() << "\t" << productos[i].getCantidad() << "\t" << productos[i].getPrecio() << "\n";
    }

    std::cout << "-------------------------------------------------------\n";
    std::cout << "Total: " << totalPrecio << "\nVuelto: " << vuelto << "\n";
    std::cout << "-------------------------------------------------------\n";
}
