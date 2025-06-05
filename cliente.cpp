// Cliente.cpp
#include "Cliente.h"

Cliente::Cliente(string cedula, string nombre) : cedula(cedula), nombre(nombre) {}

string Cliente::getCedula() const { return cedula; }
string Cliente::getNombre() const { return nombre; }
