#include "Pelicula.h"

Pelicula::Pelicula(){
    director = "0";
    nombre = "0";
    valoracion = 0;
    recaudacion = 0;
}

Pelicula::Pelicula(string direc, string nom, float val, int rec){
    director= direc;
    nombre = nom;
    valoracion = val;
    recaudacion = rec;
}

string Pelicula::obtener_director(){
    return director;
}

string Pelicula::obtener_nombre(){
    return nombre;
}

float Pelicula::obtener_valoracion(){
    return valoracion;
}

int Pelicula::obtener_recaudacion(){
    return recaudacion;
}
