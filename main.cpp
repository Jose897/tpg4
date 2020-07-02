/*
 * main.cpp
 *
 *  Created on: 2 jul. 2020
 *      Author: Santi
 */


#include "Archivo.h"
#include "Lista.h"

const string NOMBRE_ARCHIVO = "peliculas_no_vistas.txt";
const string NOMBRE_ARCHIVO1 = "peliculas_vistas.txt";

int main(){
	Archivo a;
	Lista <Pelicula*> l;

	a.carga_peliculas(NOMBRE_ARCHIVO, l);


	return 0;
}
