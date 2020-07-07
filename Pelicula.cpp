/*
 * Pelicula.cpp
 *
 *  Created on: 2 jul. 2020
 *      Author: Santi
 */

#include "Pelicula.h"

#include "Pelicula.h"

Pelicula::Pelicula(){
    director = "";
    titulo = "";
    puntaje = 0;
    genero = "";
}
Pelicula::Pelicula(string titulo, string genero, int puntaje, string director, Lista<string> actores) {
    this -> titulo = titulo;
    this -> genero = genero;
    this -> puntaje = puntaje;
    this -> director = director;
    this -> lista_actores = actores;
}
string Pelicula::obtener_titulo(){
    return titulo;
}

string Pelicula::obtener_genero(){
    return genero;
}

int Pelicula::obtener_puntaje(){
    return puntaje;
}
string Pelicula::obtener_director(){
    return director;
}

Lista <string> Pelicula::obtener_actores(){
	return lista_actores;
}
