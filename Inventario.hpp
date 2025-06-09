#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP


class Inventario {
public:
    Inventario(const char* nombreProducto, int cantidadInicial);
    ~Inventario(); // destrucotr
    void mostrarInventario() const;
    void agregarCantidad(int mas);
    void reducirCantidad(int menos);

private:
    char producto[50]; // Nombre del producto
    int cantidad;      // Cantidad disponible
};

#endif
