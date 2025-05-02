//
// Created by Romina on 01-05-2025.
//

#include "ListaCliente.h"
#include "Cliente.h"
#include <iostream>
#include <string>

#include "NodoDobleCliente.h"
using namespace std;

ListaCliente::ListaCliente(NodoDobleCliente* cabeza, NodoDobleCliente* cola, int cantidadNodos) {;
    this->setCabeza(cabeza);
    this->setCola(cola);
    this->setCantidadNodos(cantidadNodos);
}
bool estaVacia() {

}

bool agregarCliente(NodoDobleCliente* cliente) {

}

bool eliminarCliente(NodoDobleCliente* cliente) {

}

void mostrarCliente(NodoDobleCliente* cliente) {

}

Cliente* obtenerCliente(string rut) {

}