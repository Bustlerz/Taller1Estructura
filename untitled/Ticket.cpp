//
// Created by Romina on 01-05-2025.
//

#include "Ticket.h"
#include "Comentario.h"
#include <iostream>
#include <string>
using namespace std;

Ticket::Ticket(string id, string reporte, string estado, int numComentarios) {
    this->id = id;
    this->reporte = reporte;
    this->estado = estado;
    this->numComentarios = numComentarios;
}

string Ticket::getId(){
    return id;
}

string Ticket::getReporte() {
    return reporte;
}

std::string Ticket::getEstado() {
    return estado;
}

int Ticket::getNumComentarios() {
    return numComentarios;
}

