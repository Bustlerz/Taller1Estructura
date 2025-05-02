//
// Created by Romina on 01-05-2025.
//

#ifndef LISTACLIENTE_H
#define LISTACLIENTE_H
#include "NodoDobleCliente.h"


class ListaCliente {
private:
    NodoDobleCliente* cabeza;
    NodoDobleCliente* cola;
    int cantidadNodos;
public:
    ListaCliente(NodoDobleCliente *cabeza, NodoDobleCliente *cola, int cantidadNodos);
    ListaCliente();
    ~ListaCliente();
    NodoDobleCliente* getCabeza();
    NodoDobleCliente* getCola();
    int getCantidadNodos();
    void setCabeza(NodoDobleCliente* cabeza);
    void setCola(NodoDobleCliente* cola);
    void setCantidadNodos(int cantidadNodos);
};



#endif //LISTACLIENTE_H
