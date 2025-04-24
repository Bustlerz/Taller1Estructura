#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include "sistemaSucursal.h"
using namespace std;

//app es abrir archivo en modo de escritura

void lecturaSucursales();
void lecturaClientes();
void lecturaTickets();
void lecturaPrincipal();
void menuPrincipal();
void menuSucursal();


int main() {
    lecturaPrincipal();
    menuPrincipal();

    sistemaSucursal sistema;

    // Agregar sucursales

    system("pause");
    return 0;

}

//lee los tres archivos juntos
void lecturaPrincipal() {
    lecturaSucursales();
    lecturaClientes();
    lecturaTickets();
}

//lectura de las sucursales
void lecturaSucursales() {
    ifstream archivo1;
    string texto;

    archivo1.open("sucursales.txt",ios::in);

    if (archivo1.fail()) {
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
    cout << endl;
    cout << "Sucursales" << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();
}

//lectura de los clientes
void lecturaClientes() {
    ifstream archivo1;
    string texto;

    archivo1.open("clientes.txt",ios::in);

    if (archivo1.fail()) {
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
    cout << endl;
    cout << "Clientes" << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();
}

//lectura de los tickets
void lecturaTickets() {
    ifstream archivo1;
    string texto;

    archivo1.open("tickets.txt",ios::in);

    if (archivo1.fail()) {
        cout << "Error al abrir el archivo" << endl;
        exit(1);
    }
    cout << endl;
    cout << "Tickets" << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();
}


void menuPrincipal() {
    int opcion = 0;

    cout << endl;
    cout << "Menu Principal" << endl;
    cout << "1-. Menu sucursal" << endl;
    cout << "2-. Menu asistencia" << endl;
    cout << "3-. Menu estadisticas" << endl;
    cout << "4-. Guardar y salir" << endl;
    cout << "Indique opcion a desear: " << endl;
    cin >> opcion;

    switch (opcion) {
        case 1: {
            menuSucursal();
        }
    }
}



void menuSucursal() {
    int opcion = 0;
    string nombreSucursal;

    cout << "Menu Sucursal" << endl;
    cout << "1-. Agregar sucursal" << endl;
    cout << "2-. Listar sucursales" << endl;
    cout << "3-. Eliminar sucursal" << endl;
    cout << "4-. Ver sucursal" << endl;
    cout << "5-. Volver\n" << endl; //volver al menu anterior
    cin >> opcion;

    switch (opcion) {
        case 1: {
            //agregar sucursal
        }
        case 2: {
            //listar sucursal
        }
        case 3: {
            //eliminar sucursal

        }
        case 4: {
            //ver sucursal
            lecturaSucursales();
            cout << "Escriba el nombre de la sucursal a ver: " << endl;
            cin >> nombreSucursal;


        }
        case 5: {
            //volver a menu principal

        }
    }
}
