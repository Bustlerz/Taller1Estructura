//
// Created by Romina on 01-05-2025.
//

#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include <string>
#include "Comentario.h"

class Ticket {
private:
        std::string id;
        std::string reporte;
        std::string estado; // Abierto, Resuelto, Cerrado
        int numComentarios;
        std::string rutCliente;
        std::string sucursal;
        Comentario* comentarios; // Pila de comentarios
        Ticket* siguiente;
public:
        Ticket(std::string id, std::string reporte, std::string estado, int numComentarios);
        //gets
        std::string getId();
        std::string getReporte();
        std::string getEstado();
        int getNumComentarios();
        std::string getRutCliente();
        std::string getSucursal();
        Comentario* getComentarios();
        Ticket* getSiguiente();
        //sets
        void setId(std::string id);
        void setReporte(std::string reporte);
        void setEstado(std::string estado);
        void setNumComentarios(int numComentarios);
        void setRutCliente(std::string rutCliente);
        void setSucursal(std::string sucursal);
        void setComentarios(Comentario* comentarios);
        void setSiguiente(Ticket* siguiente);
};



#endif //TICKET_H
