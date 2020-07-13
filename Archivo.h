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
    	// Constructor
	// PRE: Ninguna
	// POST: construye objeto vacio
    	Archivo();
    	// metodo cargar_peliculas
    	// PRE: Ninguna, sino existe el archivo lanza excepcion
    	// POST: construye el objeto Pelicula y lo guarda en una lista
    	void carga_peliculas(const string, Lista<Pelicula*> &lista);
    	// Metodo separar actores
    	// PRE: Recibir un string
    	// POST: construye una lista con punteros a los actores y la guarda en el objeto 		//pelicula
    	Lista <string*>* separar_actores(string);
    	// Metodo cargar_lista_recomendadas
    	// PRE: lista_vistas y listas_no_vistas creadas
    	// POST: construye una lista con las peliculas recomendadas
    	Lista<Pelicula*> carga_lista_recomendadas(Lista<Pelicula*> &lista_vistas, Lista<Pelicula*> &lista_no_vistas);
    	// Destructor
    	// PRE: Ninguna
    	// POST: destruye el objeto
    	~Archivo();

};
#endif /* ARCHIVO_H_ */
