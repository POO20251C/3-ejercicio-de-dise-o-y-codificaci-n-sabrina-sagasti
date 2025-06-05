// Cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente {
private:
    string cedula;
    string nombre;
public:
    Cliente(string cedula, string nombre);
    string getCedula() const;
    string getNombre() const;
};

#endif
