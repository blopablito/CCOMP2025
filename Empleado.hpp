#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "Persona.hpp"
class Empleado{

public: //private proteger su informacion
  int HorarioDeTrabajo;
  int HorasTrabajo;
  double PagaporTrabajo;

public:
  int trabajar(int hora);
  float paga();
};
/**
int main (){
gerente(funcion acceso a todo) :v
empleado(horariotrabajo,paga,trabajo)
trabajar=paga
}
**/
