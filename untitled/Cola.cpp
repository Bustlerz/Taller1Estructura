//
// Created by Romina on 01-05-2025.
//

#include "Cola.h"
#include <iostream>
#include <string>
#include <queue>
using namespace std;


//organizacion de tickets (cola queue)
int colaTickets(){//FIFO
    int sumTicket;
    std::queue<string>* q = new std::queue<string>();
    for(int i = 0; i < sumTicket; i++){
        std::cout << "Insertando"  << i << std::endl;
        q->push(i);
    }
    std::cout << std::endl;
    string dato;
    for(int i = 0; i < 5; i++){
        dato = q->top();
        std::cout << "Eliminando" << dato << std::endl;
        q->pop();
    }
    std::cout << std::endl;
    delete q;
    return 0;
}