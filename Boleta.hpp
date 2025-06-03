#ifndef BOLETA_HPP
#define BOLETA_HPP

#include "Producto.hpp"

class Boleta {
private:
    char nombreEmpresa[50];
    char RUC[20];
    char ubicacionCompra[50];
    char fechaHora[20];  
    char nombreCliente[50];
    char dniCliente[10];
    char formaPago[20];
    Producto productos[10]; // Máximo 10 productos
    int numProductos;
    double totalPrecio;
    double vuelto;

public:
    Boleta(const char* nombreEmpresa, const char* RUC, const char* ubicacionCompra);
    void guardarRegistro(const char* nombreCliente, const char* dni, const char* formaPago, Producto productos[], int cantidadProductos, double total, double pago);
    void imprimirBoleta();
};

#endif
