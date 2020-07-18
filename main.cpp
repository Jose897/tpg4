#include "Archivo.h"
#include <string>
#include "Menu.h"
using namespace std;
const string NOMBRE_ARCHIVO_NO_VISTAS = "peliculas_no_vistas.txt";
const string NOMBRE_ARCHIVO_VISTAS = "peliculas_vistas.txt";
int main()
{
    Archivo carga;
    Lista<Pelicula*>* lista_recomendadas;
    Lista<Pelicula*>* lista_peliculas_vistas = new Lista<Pelicula*>;
    Lista<Pelicula*>* lista_peliculas_no_vistas = new Lista<Pelicula*>;
    carga.carga_peliculas(NOMBRE_ARCHIVO_VISTAS, lista_peliculas_vistas);
    carga.carga_peliculas(NOMBRE_ARCHIVO_NO_VISTAS, lista_peliculas_no_vistas);
    
    if( !carga.hay_excepcion() ){
    	lista_recomendadas = carga.carga_lista_recomendadas(lista_peliculas_vistas, lista_peliculas_no_vistas);
    	Menu menu;
    	menu.mostrar_menu(lista_peliculas_vistas, lista_peliculas_no_vistas, lista_recomendadas);
    }

    return 0;
}
