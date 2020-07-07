/*
 * Archivo.h
 *
 *  Created on: 2 jul. 2020
 *      Author: Santi
 */

#ifndef ARCHIVO_H_
#define ARCHIVO_H_

#include <fstream>
#include <string>
#include "Pelicula.h"
#include <sstream>
using namespace std;
class Archivo{
private:
public:
    Archivo();
    void carga_peliculas(const string, Lista<Pelicula*> &lista);
    Lista <string> separar_actores(string);
    ~Archivo();

};
#endif /* ARCHIVO_H_ */
