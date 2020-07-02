#ifndef TPG4_PELICULA_H
#define TPG4_PELICULA_H

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
    Lista<string> lista_actores;
public:
    Pelicula();
    Pelicula(string titulo, string genero, int puntaje, string director);
    string obtener_titulo();
    string obtener_genero();
    int obtener_puntaje();
    string obtener_director();
};
#endif //TPG4_PELICULA_H
