//
// Created by Romina on 01-05-2025.
//

#ifndef SUCURSAL_H
#define SUCURSAL_H
#include <iostream>
#include <string>

#include "Cliente.h"



class Sucursal {
private:
    std::string nombreSucursal; //nombre de la sucursal es unica
    int capacidadSucursal;
    std::string ubicacionSucursal;
    Cliente* clientes;
    Sucursal* siguiente;
public:
    //creara sucursal nueva
    Sucursal(std::string nombreSucursal, int capacidadSucursal, std::string ubicacionSucursal);
    std::string getNombreSucursal();
    std::string getCapacidadSucursal();
    std::string getUbicacionSucursal();
};



#endif //SUCURSAL_H
