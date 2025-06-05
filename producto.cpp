// Producto.cpp
#include "Producto.h"
#include <iostream>

Producto::Producto(int codigo, string nombre, float precio, int stock)
    : codigo(codigo), nombre(nombre), precio(precio), stock(stock) {}

int Producto::getCodigo() const { return codigo; }
string Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
int Producto::getStock() const { return stock; }

void Producto::incrementarStock(int cantidad) {
    stock += cantidad;
}

bool Producto::reducirStock(int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
        return true;
    }
    return false;
}

void Producto::mostrar() const {
    cout << "Producto: " << nombre << ", Código: " << codigo
         << ", Precio: $" << precio << ", Stock: " << stock << endl;
}
