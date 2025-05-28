#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "Persona.hpp"

class Empleado : public Persona {
public:
    char puesto[50]; //Jefe,Cajero,etc
    double salario; //Dinero

public:
    Empleado(const char* nombre, int edad, const char* dni, const char* puesto, double salario);
    void mostrarInfo() override;
};

#endif

/*
#include "Persona.hpp"
class Empleado{

public: //private proteger su informacion
  int HorarioDeTrabajo;
  int HorasTrabajo;
  double PagaporTrabajo;

public:
  Empleado(int HorarioDeTrabajo;int HorasTrabajo;double PagaporTrabajo);//construtor
  int trabajar(int hora);
  float paga();
};
/**
int main (){
gerente(funcion acceso a todo) :v
empleado(horariotrabajo,paga,trabajo)
trabajar=paga
}
*/
