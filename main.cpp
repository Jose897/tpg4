#include <string>
#include "Archivo.h"
#include "Menu.h"
using namespace std;
const string NOMBRE_ARCHIVO_NO_VISTAS = "peliculas_no_vistas.txt";
const string NOMBRE_ARCHIVO_VISTAS = "peliculas_vistas.txt";
int main()
{

    Archivo carga;
    int entrada;
    Lista<Pelicula*> lista_peliculas_vistas;
    Lista<Pelicula*> lista_peliculas_no_vistas;
    carga.carga_peliculas(NOMBRE_ARCHIVO_VISTAS, lista_peliculas_vistas);
    carga.carga_peliculas(NOMBRE_ARCHIVO_NO_VISTAS, lista_peliculas_no_vistas);
    cout << lista_peliculas_no_vistas.obtener_dato(1)->obtener_director();
    Menu menu;
    entrada = menu.mostrar_menu();
    menu.procesar_opcion(entrada);
    return 0;
}
