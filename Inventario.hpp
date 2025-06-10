#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

#include "Producto.h"

class Inventario {
private:
    static const int MAX_PRODUCTOS = 100;
    Producto* productos[MAX_PRODUCTOS];
    int totalProductos;

public:
    Inventario();
    ~Inventario();

    bool agregarProducto(const char* nombre, int cantidad, double preciounidad);
    void mostrarInventario() const;
};

#endif
