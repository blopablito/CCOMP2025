#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
protected: // porque es clase madrey cualqueirre que herede
    char nombre[50];
    int edad;
    char dni[8];

public:
    Persona(const char* nombre, int edad, const char* dni);
    ~Persona();
    void mostrarInfo();
};
#endif
