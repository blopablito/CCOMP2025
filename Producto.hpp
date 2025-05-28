#ifndef PRODUCTO_HPP
#define PRODUCTO_HPP
#include "Inventario.hpp"
class Producto {
private:
    std::string nombre;
    int cantidad;
    double preciouniddad;

public:
    Producto(std::string nombre, int cantidad, float preciounidad);
