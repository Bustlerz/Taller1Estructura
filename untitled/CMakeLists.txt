cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        sistemaSucursal.cpp
        sistema.h
        Sucursal.cpp
        Sucursal.h
        Cliente.cpp
        Cliente.h
        Ticket.cpp
        Ticket.h
        Comentario.cpp
        Comentario.h
        StackComentario.cpp
        StackComentario.h
        NodoTicket.cpp
        NodoTicket.h
        Cola.cpp
        Cola.h
        NodoDobleCliente.cpp
        NodoDobleCliente.h
        ListaCliente.cpp
        ListaCliente.h
        NodoListaEnlazada.cpp
        NodoListaEnlazada.h
        ListaEnlazada.cpp
        ListaEnlazada.h)
