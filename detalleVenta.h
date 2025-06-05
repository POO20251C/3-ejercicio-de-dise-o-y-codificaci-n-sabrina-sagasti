// DetalleVenta.h
#ifndef DETALLEVENTA_H
#define DETALLEVENTA_H
#include "Producto.h"

class DetalleVenta {
private:
    Producto* producto;
    int cantidad;
public:
    DetalleVenta(Producto* producto, int cantidad);
    Producto* getProducto() const;
    int getCantidad() const;
    float calcularSubtotal() const;
};

#endif
