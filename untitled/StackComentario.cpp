//
// Created by Romina on 01-05-2025.
//

#include "StackComentario.h"
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <fstream>
using namespace std;


StackComentario::StackComentario() {

}

int pilaComentarios(){ //LIFO
    int N;
    std::stack<string>* s = new std::stack<string>();
    for(int i = 0; i < N; i++){
        std::cout << "insertando: " << i << std::endl;
        s->push(i); //inserta un nodo al final de la cola
    }
    std::cout << std::endl;
    string dato;
    for (int i = 0; i < N; i++){
        dato = s->top();//retorna al primer nodo
        std::cout << "Eliminando "<< dato << " " << std::endl;
        s->pop(); //elimina y retorna al nodo de al frente
    }
    std::cout << std::endl;
    delete s;
    return 0;

}