//
// Created by Romina on 01-05-2025.
//

#include "Cliente.h"
#include <string>
#include <iostream>
using namespace std;

//constructor cliente
Cliente::Cliente(string nombre, string rut, string numeroTelefono) {
   this->nombre = nombre;
   this->rut = rut;//no pueden existir dos clientes con el mismo rut
   this->numeroTelefono = numeroTelefono;
}

string getNombre() {
   return getNombre();
}

string getRut() {
   return getRut();
}

string getNumeroTelefono() {
   return getNumeroTelefono();
}