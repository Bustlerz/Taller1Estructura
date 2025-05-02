//
// Created by Romina on 01-05-2025.
//

#ifndef NODODOBLECLIENTE_H
#define NODODOBLECLIENTE_H
#include "Cliente.h"


class NodoDobleCliente {
private:
    Cliente cliente;
public:
    NodoDobleCliente(Cliente cliente) {
        this->cliente = cliente;
    }
    Cliente getCliente();
    void setCliente(Cliente cliente)
};





#endif //NODODOBLECLIENTE_H
