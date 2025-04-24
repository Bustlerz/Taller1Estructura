//
// Created by Romina on 19-04-2025.
//

#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>

// Nodo para la lista generalizada de sucursales
class Nodo {
public:
    int tag; // 0: átomo, 1: sublista, 2: contador de referencias
    std::string data; // Usado si tag == 0
    Nodo* dlink; // Usado si tag == 1
    int ref; // Usado si tag == 2
    Nodo* link; // Siguiente nodo en el mismo nivel

    Nodo(int t) : tag(t), dlink(nullptr), ref(0), link(nullptr) {}
    Nodo(int t, const std::string& d) : tag(t), data(d), dlink(nullptr), ref(0), link(nullptr) {}
};

//lista generalizada = (nombre sucursal,(cantidad maxima clientes), ubicacion)
