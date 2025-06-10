#ifndef PRODUCTOS_H
#define PRODUCTOS_H

class Productos {
private:
    char nombre[50];
    double precioUnidad;
    int cantidadMateriales;

public:
    Productos(); // Constructor 
    Productos(const char* nombre, double precioUnidad, int cantidadMateriales);

    void mostrarProductos() const;

    const char* getNombre() const;
    double getPrecio() const;
    int getCantidad() const;
};

#endif
