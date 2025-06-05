
// main.cpp
#include "Tienda.h"
#include <iostream>

int main() {
    Tienda tienda;

    tienda.registrarProducto(Producto(101, "Guayos", 120.0f, 8));
    tienda.registrarProducto(Producto(102, "Bicicleta", 750.0f, 3));

    tienda.registrarCliente(Cliente("1234", "Laura Torres"));

    Cliente* cliente = tienda.buscarCliente("1234");
    if (cliente) {
        vector<pair<int, int>> compras = { {101, 2}, {102, 1} };
        tienda.procesarVenta(cliente, compras);
    }

    tienda.listarProductos();
    tienda.mostrarComprasCliente(cliente);

    return 0;
}
