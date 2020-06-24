#include "Lista.h"

Lista::Lista(){
    primero = 0;
    tam = 0;
}

bool Lista::vacia(){
    return (primero == 0);
}

Lista::~Lista(){
    while (!(vacia()))
        baja(1);
}

void Lista::append(Dato d){
    Nodo* pnodo = new Nodo(d);
    Nodo* paux = primero;
    if (this -> vacia()){
        primero = pnodo;
    }
    else{
        while (paux->obtener_siguiente()){
            paux = paux->obtener_siguiente();
        }
        paux->asignar_siguiente(pnodo);
    }
    tam++;
}

void Lista::alta(Dato d, unsigned pos){
    Nodo* nuevo = new Nodo(d);
    if(pos == 1){
        nuevo -> asignar_siguiente(primero);
        primero = nuevo;
    }
    else{
        Nodo* anterior  = obtener_nodo(pos-1);
        nuevo -> asignar_siguiente( anterior -> obtener_siguiente());
        anterior -> asignar_siguiente(nuevo);
    }
    tam++;
}


Dato Lista::consultar(unsigned pos){
    return (obtener_nodo(pos))-> obtener_dato();
}

void Lista::baja(unsigned pos){
    Nodo *borrar = primero;
    if (pos == 1){
        primero = borrar-> obtener_siguiente();
    }
    else{
        Nodo *anterior = obtener_nodo (pos-1);
        borrar = anterior -> obtener_siguiente();
        anterior -> asignar_siguiente(borrar -> obtener_siguiente());
        }
    delete borrar;
    tam--;
}

unsigned Lista::obtener_tam(){
    return tam;
}

Nodo *Lista::obtener_nodo(unsigned pos){
    Nodo *aux = primero;
    unsigned i = 1;
    while(i<pos){
        aux = aux -> obtener_siguiente();
        i++;
    }
    return aux;
}

void Lista::ordenar(){
    for( unsigned i = 1; i<=tam; i++){
        int j = 1;
        while(i>0){
            if(consultar(i).obtener_recaudacion() < consultar(j).obtener_recaudacion()){
                j++;
            }
            else{
                alta(consultar(i), j);
                baja(i+1);
                break;
            }
        }
    }
}

void Lista::mostrar(){
    for( unsigned i = 1; i <= tam; i++){
        cout<<consultar(i).obtener_director()<<" - ";
        cout<<consultar(i).obtener_nombre()<<" - ";
        cout<<consultar(i).obtener_valoracion()<<" - ";
        cout<<consultar(i).obtener_recaudacion()<<endl;
    }
}
