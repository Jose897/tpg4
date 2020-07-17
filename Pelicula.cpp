#include "Pelicula.h"

Pelicula::Pelicula(){
    director = "";
    titulo = "";
    puntaje = 0;
    genero = "";
    lista_actores = 0;
}
Pelicula::Pelicula(string titulo, string genero, int puntaje, string director, Lista<string*>* lista_actores) {
    this -> titulo = titulo;
    this -> genero = genero;
    this -> puntaje = puntaje;
    this -> director = director;
    this -> lista_actores = lista_actores;
}
Pelicula::~Pelicula(){
	//
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
Lista <string*>* Pelicula::obtener_actores(){
	return lista_actores;
}
