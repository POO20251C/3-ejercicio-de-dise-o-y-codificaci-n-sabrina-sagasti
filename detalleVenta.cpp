// DetalleVenta.cpp
#include "DetalleVenta.h"

DetalleVenta::DetalleVenta(Producto* producto, int cantidad)
    : producto(producto), cantidad(cantidad) {}

Producto* DetalleVenta::getProducto() const { return producto; }
int DetalleVenta::getCantidad() const { return cantidad; }
float DetalleVenta::calcularSubtotal() const {
    return producto->getPrecio() * cantidad;
}
