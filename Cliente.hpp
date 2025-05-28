#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Persona.hpp"

class Cliente : public Persona {
public:
    char Pedido[50];

public:
    Cliente(const char* nombre, int edad, const char* dni, const char* preferencias);
    void mostrarInfo(); //override?
};

#endif
