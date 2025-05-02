//
// Created by Romina on 01-05-2025.
//

#include "NodoDobleCliente.h"
#include <iostream>
#include <string>

#include "Cliente.h"
using namespace std;


//variables
string buscarDatos, datoBuscar = nullptr;

template <typename string>
struct nodo{
    string dato; //contiene la informacion
    nodo *siguiente, *anterior; //apunta al nodo siguiente y anterior
};

nodo<string>* primero = nullptr;
nodo<string>* ultimo = nullptr;

//guarda y crea nodos de acuerdo a la informacion que entregara el usuario
void ingresarDato();
void mostrarDato();
void buscarDato();
void eliminarCliente();

void ingresarDato() {
    nodo<string> *nuevoNodo = new nodo<string>;
    std::cout << "Ingrese cliente a agregar: ";
    std::cin >> nuevoNodo->dato; //guarda el dato al nuevo nodo creado

    //condicional por si no hay nodo
    if (primero == nullptr) {
        primero = nuevoNodo;
        primero->siguiente = primero;
        primero->anterior = primero;
        ultimo = primero;
    }else {
        //al ingresar datos ultimo se ira actualizando
        ultimo->siguiente = nuevoNodo;
        nuevoNodo->siguiente = primero;
        nuevoNodo->anterior = primero;
        ultimo = nuevoNodo; //actualiza ultimo dato con dato ingresado
        primero->anterior = ultimo; //actualiza datos
    }
}

//recorrido lista doble circular
void mostrarDato() {
    nodo<string>* aux = new nodo <string>;
    aux = primero;
    //si es asi es porque hay datos
    if (primero != nullptr) {
        do {
            std::cout << aux->dato << " ";
            aux = aux->siguiente; //muestra el dato siguiente
        }while (aux!=primero);
    }else {
        std::cout << "La lista esta vacia \n ";
    }

}

void buscarDato() {
    nodo<string> *buscar = new nodo<string> ();
    buscar = primero;
    std::cout << "Ingrese cliente a buscar";
    std::cin >> buscarDatos;

    //int swBD
    if (primero != nullptr) {
        do {
            if (buscar->dato == buscarDatos) {
                std::cout << "Cliente encontrado \n";
                datoBuscar = 1;
            }
            buscar = buscar->siguiente;//puntero se actualiza con el siguiente
        }while (buscar!=primero && datoBuscar == "null");
        if (datoBuscar == "null") {
            std::cout << "El cliente buscado no se encuentra";
        }
    }else {
        std::cout << "La lista esta vacia \n ";
    }
}

void eliminarCliente() {
    nodo <string>* buscar = new nodo <string>;
    nodo<string>* nodoEliminar = new nodo<string>;
    buscar = primero;
    nodoEliminar = NULL;

    std::cout << "Ingrese cliente a eliminar";
    std::cin >> buscarDatos;

    //int swBD
    if (primero != nullptr) {
        do {
            if (buscar->dato == buscarDatos) {
                std::cout << "Cliente encontrado \n";
                //si el dato se encuentra en el primer nodo
                if (buscar == primero) {
                    primero = primero->siguiente;
                    primero->anterior = ultimo;
                    ultimo->siguiente = primero;
                }else if (buscar == ultimo) { //si el dato se encuentra en ultimo
                    ultimo = ultimo->anterior;
                    primero->anterior = ultimo;
                    ultimo->siguiente = primero;
                }else { //si no se encuentra en ninguna de las dos opciones
                    nodoEliminar->siguiente = nodoEliminar;
                    buscar->siguiente = nodoEliminar;

                }
                nodoEliminar = buscar; //tomar nodo en el nodoEliminar
                buscar = buscar->siguiente;

                datoBuscar = 1;
            }
            buscar = buscar->siguiente;//puntero se actualiza con el siguiente
        }while (buscar!=primero && datoBuscar == "null");

        if (datoBuscar == "null") {
            std::cout << "El cliente buscado no se encuentra";
        }else {
            delete nodoEliminar;//para liberar el espacio memoria, siempre que se cumpla el if principal.
        }
    }else {
        std::cout << "La lista esta vacia \n ";
    }

}

