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

void Archivo::carga_peliculas(string nombre_archivo, Lista<Pelicula*> &lista){
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
            Pelicula *peli = new Pelicula(titulo_pelicula, genero_pelicula, punt, director_pelicula);
            lista.insertar(peli);
            lista.obtener_dato(0);



        }
        archivo.close();
    }
    else{
        cout<<"El archivo fallo"<<endl;
    }

}



Lista <string> Archivo::separar_actores(string actores_pelicula){

	Lista <string> l_actores;
	char aux = '\0';
	int i = 0;
	string actor;

	while(aux != '\n'){
		aux = actores_pelicula[i];
		while(aux != ' '){
			actor[i] += aux;
			i++;
			aux = actores_pelicula[i];
		}
		l_actores.insertar(actor);
		cout << actor;
		actor = "\0";
	}
	return l_actores;
}
