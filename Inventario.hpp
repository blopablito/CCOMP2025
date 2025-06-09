#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

class inventario{
public:   //cantidad producto
    Inventario(const char* producto, int cantidad);
    ~Inventario();
    void mostrarInventario();
    void agregarCantidad(int extra);
    void reducirCantidad(int menos);
private:   //producto
    char producto[50];
    int cantidad;

};

#endif
