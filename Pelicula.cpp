#include "Pelicula.h"

Pelicula::Pelicula(){
    director = "";
    titulo = "";
    puntaje = 0;
    genero = "";
}
Pelicula::Pelicula(string titulo, string genero, int puntaje, string director) {
    this -> titulo = titulo;
    this -> genero = genero;
    this -> puntaje = puntaje;
    this -> director = director;
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
