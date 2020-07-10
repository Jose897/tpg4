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
    Lista <string*> lista_actores;
public:
    Pelicula();
    Pelicula(string titulo, string genero, int puntaje, string director, Lista<string*> );
    string obtener_titulo();
    string obtener_genero();
    int obtener_puntaje();
    string obtener_director();
    Lista <string*> obtener_actores();
};

#endif //PELICULA_H_
