//
// Created by fran9 on 7/1/2020.
//

#include <string>
#include "Archivo.h"
using namespace std;
const string NOMBRE_ARCHIVO_NO_VISTAS = "peliculas_no_vistas.txt";
const string NOMBRE_ARCHIVO_VISTAS = "peliculas_vistas.txt";
int main()
{

    Archivo carga;
    Lista<Pelicula*> lista_peliculas_vistas;
    Lista<Pelicula*> lista_peliculas_no_vistas;
    carga.carga_peliculas(NOMBRE_ARCHIVO_VISTAS, lista_peliculas_vistas);
    carga.carga_peliculas(NOMBRE_ARCHIVO_NO_VISTAS, lista_peliculas_no_vistas);
    cout << lista_peliculas_no_vistas.obtener_dato(1)->obtener_director();
    return 0;
}