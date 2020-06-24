#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <iostream>
#include <string>
#include "Nodo.h"

class Lista{
    private:
        // Primer elemento de la lista
        Nodo* primero;
        // Tamaño de la lista
        unsigned tam;
    public:
        // Constructor
        // PRE:  ninguna
        // POST: construye una lista vacia
        //       - primero apunta a nulo
        //       - tam = 0
        Lista();
        // Destructor
        // PRE:  lista creada
        // POST: Libera todos los recursos de la lista
        ~Lista();
        // La lista es vacía?
        // PRE:  lista creada
        // POST: devuelve verdadero si la lista es vacia
        //       falso de lo contrario
        bool vacia();
        // Agregar un elemento a la lista
        // PRE: lista creada
        // POST: agrega un dato (dentro de un nodo) al final
        // incrementa tam en 1
        void append(Dato d);
        // Agregar un elemento a la lista
        // PRE:  lista creada
        // POST: agrega un dato (dentro de un nodo) al final
        //       incrementa tam en 1
        void alta(Dato d, unsigned pos);
        // Obtener el dato que está en la posición pos
        // PRE:  - lista creada y no vacia
        //       - 0 < pos <= tam
        // POST: devuelve el dato que esta en la posicion pos
        //       se toma 1 como el primero
        Dato consultar(unsigned pos);
        // Borrado del nodo que está en la posición pos
        // PRE:  - lista creada y no vacia
        //       - 0 < pos <= tam
        // POST: libera el nodo que esta en la posición pos
        //       se toma 1 como el primero
        void baja(unsigned pos);
        // Obtener el tamaño de la lista
        // PRE:  Lista creada
        // POST: Devuelve tam (cantidad de nodos de la lista)
        unsigned obtener_tam();
        //Ordena la lista de mayor a menor segun la recaudacion
        void ordenar();
        //muestra los elementos de la lista
        void mostrar();
    private:
        Nodo* obtener_nodo(unsigned pos);
};
#endif // LISTA_H_INCLUDED
