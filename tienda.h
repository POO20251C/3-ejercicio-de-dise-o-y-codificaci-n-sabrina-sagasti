// Tienda.h
#ifndef TIENDA_H
#define TIENDA_H
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
#include <vector>
using namespace std;

class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
    vector<Venta> ventas;
public:
    void registrarProducto(const Producto& p);
    void registrarCliente(const Cliente& c);
    Producto* buscarProducto(int codigo);
    Cliente* buscarCliente(string cedula);
    bool procesarVenta(Cliente* cliente, vector<pair<int, int>> compras);
    void listarProductos() const;
    void mostrarComprasCliente(Cliente* cliente) const;
};

#endif
