// Tienda.cpp
#include "Tienda.h"
#include <iostream>

void Tienda::registrarProducto(const Producto& p) {
    productos.push_back(p);
}

void Tienda::registrarCliente(const Cliente& c) {
    clientes.push_back(c);
}

Producto* Tienda::buscarProducto(int codigo) {
    for (auto& p : productos) {
        if (p.getCodigo() == codigo) return &p;
    }
    return nullptr;
}

Cliente* Tienda::buscarCliente(string cedula) {
    for (auto& c : clientes) {
        if (c.getCedula() == cedula) return &c;
    }
    return nullptr;
}

bool Tienda::procesarVenta(Cliente* cliente, vector<pair<int, int>> compras) {
    Venta venta(cliente);
    for (auto& par : compras) {
        Producto* prod = buscarProducto(par.first);
        if (!prod || !venta.agregarDetalle(prod, par.second)) {
            cout << "No se pudo realizar la venta del producto con código " << par.first << endl;
            return false;
        }
    }
    ventas.push_back(venta);
    return true;
}

void Tienda::listarProductos() const {
    for (const auto& p : productos) p.mostrar();
}

void Tienda::mostrarComprasCliente(Cliente* cliente) const {
    for (const auto& v : ventas) {
        if (v.getCliente()->getCedula() == cliente->getCedula()) {
            v.mostrarVenta();
        }
    }
}
