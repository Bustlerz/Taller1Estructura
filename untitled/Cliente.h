//
// Created by Romina on 01-05-2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include "Ticket.h"


class Cliente {
private:
    std::pmr::string nombre;
    std::pmr::string rut;
    std::pmr::string numeroTelefono;
    std::pmr::string sucursal;
    Ticket* ticket;
    Cliente* siguiente;
    Cliente* anterior;
public:
    Cliente(std::string nombre, std::string rut, std::string numeroTelefono, std::string sucursal,
        ticket, siguiente);

    std::string getNombre();

    std::string getRut();

    std::string getNumeroTelefono();

    std::string getSucursal();
    Ticket* getTicket();
    Cliente* getSiguiente();

    void setNombre(std::string nombre);
    void setRut(std::string rut);
    void setNumeroTelefono(std::string numeroTelefono);
    void setSucursal(std::string sucursal);
    void setTicket(Ticket* ticket);
    void setSiguiente(Cliente* siguiente);
};



#endif //CLIENTE_H
