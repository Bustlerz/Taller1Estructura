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
#include <stack>
#include <queue>


// Nodo para la lista generalizada de sucursales

//lista generalizada = (nombre sucursal,(cantidad maxima clientes), ubicacion)


//almacenamiento de clientes (lista circular doblemente enlazada)


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






