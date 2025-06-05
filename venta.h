// Venta.h
#ifndef VENTA_H
#define VENTA_H
#include "DetalleVenta.h"
#include "Cliente.h"
#include <vector>
using namespace std;

class Venta {
private:
    Cliente* cliente;
    vector<DetalleVenta> detalles;
    float total;
    void calcularTotal();
public:
    Venta(Cliente* cliente);
    bool agregarDetalle(Producto* producto, int cantidad);
    float getTotal() const;
    Cliente* getCliente() const;
    void mostrarVenta() const;
};

#endif
