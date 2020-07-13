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
        throw "El archivo no existe!!!\n";
    }

}



Lista <string*> Archivo::separar_actores(string actores_pelicula){

	Lista <string*> l_actores;

	istringstream isstream(actores_pelicula);

	while(!isstream.eof()){

		string actor;

	    isstream >> actor;

	    string* actor_puntero = new string(actor);

	    l_actores.insertar(actor_puntero);
	}

	return l_actores;
}

Lista<Pelicula*> Archivo::carga_recomendadas(Lista<Pelicula*> &lista_vistas, Lista<Pelicula*> &lista_no_vistas){
    Lista<Pelicula*> lista_recomendadas;
    for (int i = 1; i <= lista_no_vistas.obtener_tamanio(); i++) {
        for( unsigned j = 1; j<=lista_vistas.obtener_tamanio(); j++) {
            if( lista_no_vistas.obtener_dato(i)->obtener_puntaje() >= 7){
                lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                break;
            }
            else if(lista_vistas.obtener_dato(j)->obtener_director() == lista_no_vistas.obtener_dato(i)->obtener_director()){
                cout << "El director coincide y es: " << lista_no_vistas.obtener_dato(i)->obtener_director() << ".\n";
                lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                break;
            }
            else if(lista_vistas.obtener_dato(j)->obtener_genero() == lista_no_vistas.obtener_dato(i)->obtener_genero()){
                lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                break;
//Falta agregar recomendadas en base a los actores (falta terminar lista actores para eso)
            }
        }
    }
    return lista_recomendadas;
}