/*
 * Archivo.cpp
 *
 *  Created on: 2 jul. 2020
 *      Author: Santi
 */

#include "Archivo.h"
#include <fstream>
Archivo::Archivo() {
}

Archivo:: ~Archivo() {

}

void Archivo::carga_peliculas(const string nombre_archivo, Lista<Pelicula*> &lista){
    string titulo_pelicula;
    string director_pelicula;
    string genero_pelicula;
    string puntaje_pelicula;
    string actores_pelicula;
    string espacio;
    ifstream archivo(nombre_archivo);

    if(archivo.is_open()){
        while(!archivo.eof()){

            getline(archivo, titulo_pelicula);
            getline(archivo, genero_pelicula);
            getline(archivo, puntaje_pelicula);
            getline(archivo, director_pelicula);
            getline(archivo, actores_pelicula);
            getline(archivo, espacio);
            stringstream linea(puntaje_pelicula);
            int punt = 0;
            linea >> punt;
            Pelicula *peli = new Pelicula(titulo_pelicula, genero_pelicula, punt, director_pelicula,separar_actores(actores_pelicula));
            lista.insertar(peli);
            lista.obtener_dato(0);



        }
        archivo.close();
    }
    else{
        throw "El archivo no existe!!!\n"
    }

}



Lista <string>  Archivo::separar_actores(string actores_pelicula){

	Lista <string> l_actores;

	std::istringstream isstream(actores_pelicula);

	while(!isstream.eof()){

		std::string actor;

	    isstream >> actor;

	    l_actores.insertar(actor);
	}
	return l_actores;
}
