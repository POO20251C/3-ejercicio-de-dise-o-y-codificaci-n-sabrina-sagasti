// Producto.h
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {
private:
    int codigo;
    string nombre;
    float precio;
    int stock;
public:
    Producto(int codigo, string nombre, float precio, int stock);
    int getCodigo() const;
    string getNombre() const;
    float getPrecio() const;
    int getStock() const;
    void incrementarStock(int cantidad);
    bool reducirStock(int cantidad);
    void mostrar() const;
};

#endif
