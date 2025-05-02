//
// Created by Romina on 01-05-2025.
//

#ifndef COMENTARIO_H
#define COMENTARIO_H
#include <iostream>
#include <string>


class Comentario {
    private:
    int origen; //si proviene del cliente o la sucursal
    std::pmr::string comentario;
    Comentario* siguiente;

    public:
    Comentario(int id, std::pmr::string reporte, std::pmr::string estado) {
    }

    //gets
    int getId();

    std::pmr::string getReporte();

    std::pmr::string getComentario();
    Comentario* getSiguiente();
    //sets
    void setSiguiente(Comentario* c);


};



#endif //COMENTARIO_H
