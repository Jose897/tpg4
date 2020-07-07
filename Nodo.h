/*
 * Nodo.h
 *
 *  Created on: 2 jul. 2020
 *      Author: Santi
 */

#ifndef NODO_H_
#define NODO_H_

template < typename Dato >
class Nodo
{
private:
    Dato dato; // Dato a almacenar
    Nodo* psig; // Puntero a otro nodo
public:
    // Constructor con parametro
    // PRE: Ninguna
    // POST: Crea un nodo con el dato d
    // y el puntero a NULL
    Nodo(Dato d);
    // Destructor
    // PRE: Nodo creado
    // POST: No hace nada
    ~Nodo();
// Setea el dato (lo cambia)
// PRE: el nodo tiene que estar creado
// d tiene que ser un dato válido
// POST: el nodo queda con el dato d
    void asignar_dato(Dato d);
    // Setear el puntero al siguiente nodo
    // PRE: nodo creado y ps válido
    // POST: el puntero al siguiente apuntará a ps
    void asignar_siguiente(Nodo* ps);
    // Obtener el dato
    // PRE: nodo creado
    // POST: devuelve el dato que contiene el nodo
    Dato obtener_dato();
    // Obtener el puntero al nodo siguiente
    // PRE: nodo creado
    // POST: Devuelve el puntero al siguiente nodo
    // si es el último devuelve NULL
    Nodo* obtener_siguiente();

};
// Constructor con parametro
template < typename Dato >
Nodo<Dato>::Nodo(Dato d)
{
    dato = d;
    psig = 0;
}
// Destructor
template < typename Dato >
Nodo<Dato>::~Nodo()
{
    // No hace nada
}
// Setear el dato
template < typename Dato >
void Nodo<Dato>::asignar_dato(Dato d)
{
    dato = d;
}
// Setear el ptr al sig
template < typename Dato >
void Nodo<Dato>::asignar_siguiente(Nodo* ps)
{
    psig = ps;
}
// Devolver el dato
template < typename Dato >
Dato Nodo<Dato>::obtener_dato()
{
    return dato;
}
// Devolver el siguiente
template < typename Dato >
Nodo<Dato>* Nodo<Dato>::obtener_siguiente()
{
    return psig;
}

#endif /* NODO_H_ */
