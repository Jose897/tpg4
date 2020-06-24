#include "Nodo.h"
#include "Pelicula.h"

Nodo::Nodo(Dato d){
    dato  = d;
    psig  = 0;
}

Nodo::~Nodo(){
}

void Nodo::asignar_dato(Dato d){
    dato = d;
}

Dato Nodo::obtener_dato(){
    return dato;
}

void Nodo::asignar_siguiente(Nodo* ps){
    psig = ps;
}

Nodo* Nodo::obtener_siguiente(){
    return psig;
}
