#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include "Persona.h"

class Trabajador : public Persona {
private:
    double salario;

public:
    Trabajador(const char* nombre, int edad, const char* dni, double salario);
    bool verificarTrabajador(const char* dniTrabajador);
    void mostrarTrabajador();
};

#endif

