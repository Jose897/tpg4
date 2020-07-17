/*
 * Pelicula.h
 *
 *  Created on: 2 jul. 2020
 *      Author: Santi
 */

#ifndef PELICULA_H_
#define PELICULA_H_

#include <iostream>
#include <string>
#include <fstream>
#include "Lista.h"

using namespace std;

class Pelicula{
private:
    string titulo;
    string genero;
    int puntaje;
    string director;
    Lista <string*>* lista_actores;
public:
    	// Constructor sin parametro
    	// PRE: Ninguna
    	// POST: Crea un objeto vacio
    	Pelicula();
    	// Constructor con parametro
    	// PRE: Recibir datos validos
    	// POST: Crea un objeto pelicula con todos los datos de la misma
    	Pelicula(string titulo, string genero, int puntaje, string director, Lista<string*>* );
	//
	//
	//
	~Pelicula();
    	// Metodo obtener titulo
    	// PRE: Ninguna
    	// POST: Retorna el titulo de la pelicula
    	string obtener_titulo();
    	// Metodo obtener genero
      	// PRE: Ninguna
    	// POST: Retorna el genero de la pelicula
    	string obtener_genero();
    	// Metodo obtener puntaje
    	// PRE: Ninguna
    	// POST: Retorna el puntaje de la pelicula
    	int obtener_puntaje();
    	// Metodo obtener titulo
    	// PRE: Ninguna
       	// POST: Retorna el director de la pelicula
    	string obtener_director();
    	// Metodo obtener actores
    	// PRE: Ninguna
      	// POST: retorna la lista de actores
    	Lista <string*>* obtener_actores();
};

#endif //PELICULA_H_
