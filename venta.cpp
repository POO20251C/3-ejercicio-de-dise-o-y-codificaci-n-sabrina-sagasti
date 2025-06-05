// Venta.cpp
#include "Venta.h"
#include <iostream>

Venta::Venta(Cliente* cliente) : cliente(cliente), total(0) {}

bool Venta::agregarDetalle(Producto* producto, int cantidad) {
    if (producto->reducirStock(cantidad)) {
        detalles.push_back(DetalleVenta(producto, cantidad));
        calcularTotal();
        return true;
    }
    return false;
}

void Venta::calcularTotal() {
    total = 0;
    for (const auto& d : detalles) {
        total += d.calcularSubtotal();
    }
}

float Venta::getTotal() const { return total; }
Cliente* Venta::getCliente() const { return cliente; }

void Venta::mostrarVenta() const {
    cout << "Cliente: " << cliente->getNombre() << endl;
    for (const auto& d : detalles) {
        cout << "  " << d.getProducto()->getNombre()
             << " x" << d.getCantidad()
             << " = $" << d.calcularSubtotal() << endl;
    }
    cout << "Total: $" << total << endl;
}
