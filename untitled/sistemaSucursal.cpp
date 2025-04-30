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

//variables
int buscarDatos;



// Nodo para la lista generalizada de sucursales

//lista generalizada = (nombre sucursal,(cantidad maxima clientes), ubicacion)


//almacenamiento de clientes (lista circular doblemente enlazada)

struct nodo {
    int dato;
    nodo *siguiente, *anterior;
};

nodo *primero = NULL, *ultimo = NULL;

//guarda y crea nodos de acuerdo a la informacion que entregara el usuario
void ingresarDato();
void mostrarDato();
void buscarDato();

void ingresarDato() {
    nodo *nuevoNodo = new nodo ();
    std::cout << "Ingrese cliente a agregar: ";
    std::cin >> nuevoNodo->dato; //guarda el dato al nuevo nodo creado

    //condicional por si no hay nodo
    if (primero == NULL) {
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
    nodo *aux = new nodo ();
    aux = primero;
    //si es asi es porque hay datos
    if (primero != NULL) {
        do {
            std::cout << aux->dato << " ";
            aux = aux->siguiente; //muestra el dato siguiente
        }while (aux!=primero);
    }else {
        std::cout << "La lista esta vacia \n ";
    }

}

void buscarDato() {
    nodo *buscar = new nodo ();
    buscar = primero;
    std::cout << "Ingrese cliente a buscar";
    std::cin >> buscarDatos;

    //int swBD
    if (primero != NULL) {
        do {
            if (buscar->dato == buscarDatos) {
                std::cout << "Cliente encontrado \n";
            }
            buscar = buscar->siguiente;//puntero se actualiza con el siguiente
        }while (buscar!=primero);
    }


}


//organizacion de tickets (cola queue)
int colaTickets(){//FIFO
    int tickets = 5;
    std::queue<int>* q = new std::queue<int>();
    for(int i = 0; i < tickets; i++){
        std::cout << "Insertando"  << i << std::endl;
        q->push(i);
    }
    std::cout << std::endl;
    int dato;
    for(int i = 0; i < 5; i++){
        dato = q->top();
        std::cout << "Eliminando" << dato << std::endl;
        q->pop();
    }
    std::cout << std::endl;
    delete q;
    return 0;
}

//stack para cada comentario de ticker
int pilaComentarios(){ //LIFO
    int N = 5;
    std::stack<int>* s = new std::stack<int>();
    for(int i = 0; i < N; i++){
        std::cout << "insertando: " << i << std::endl;
        s->push(i); //inserta un nodo al final de la cola
    }
    std::cout << std::endl;
    int dato;
    for (int i = 0; i < N; i++){
        dato = s->top();//retorna al primer nodo
        std::cout << "Eliminando "<< dato << " " << std::endl;
        s->pop(); //elimina y retorna al nodo de al frente
    }
    std::cout << std::endl;
    delete s;
    return 0;

}

