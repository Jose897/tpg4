#include "Menu.h"

void Menu::mostrar_menu(Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas, Lista<Pelicula*> &lista_recomendadas) {
    int opcion;
    while (salir) {
        cout << "============================= BIENVENIDO AL PROGRAMA =============================" << endl << endl;
        cout << "1. Ver la lista de peliculas vistas." << endl;
        cout << "2. Ver la lista de peliculas no vistas." << endl;
        cout << "3. Ver la lista de peliculas recomendadas." << endl;
        cout << "4. Salir." << endl << endl;
        cout << "Por favor eliga la opcion que desea: " << endl << flush;
        do {
            cin >> opcion;
            if (cin.good() && opcion_valida(opcion)) {
                procesar_opcion(opcion, lista_peliculas_vistas, lista_peliculas_no_vistas, lista_recomendadas);
            } else {
                cin.clear();
                cin.ignore();
                cout << "Por favor ingrese una opcion valida: " << endl;
            }
        }while (!opcion_valida(opcion));
    }
}

bool Menu::opcion_valida(int entrada){
    return !(entrada < 1 || entrada > 4);
}

void Menu::procesar_opcion(int opcion,Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas, Lista<Pelicula*> &lista_recomendadas){

	switch(opcion){
		case 1: imprimir_peliculas(lista_peliculas_vistas); break;
		case 2: imprimir_peliculas(lista_peliculas_no_vistas); break;
		case 3: imprimir_peliculas(lista_recomendadas); break;
		case 4:
		cout << endl << "Gracias por utilizar el programa. Hasta luego." << endl;
		salir = false;
    }
}

void Menu:: imprimir_peliculas(Lista<Pelicula*> &lista_peliculas) {
    cout << "En base a sus peliculas vistas y calificaciones podemos recomendarte las siguintes peliculas" << endl;
    for (int i = 1; i <= int(lista_peliculas.obtener_tamanio()); i++) {
        cout << i << "- " << endl;
        cout << "Titulo: " << lista_peliculas.obtener_dato(i)->obtener_titulo() << endl;
        cout << "Genero: " << lista_peliculas.obtener_dato(i)->obtener_genero() << endl;
        cout << "Puntaje: " << lista_peliculas.obtener_dato(i)->obtener_puntaje() << endl;
        cout << "Director: " << lista_peliculas.obtener_dato(i)->obtener_director() << endl;
        cout << "Actores: ";
	for( int j = 1 ; j <= lista_peliculas.obtener_dato(i)->obtener_actores()->obtener_tamanio() ; j++){
		cout << *lista_peliculas.obtener_dato(i)->obtener_actores()->obtener_dato(j) << " ";
	}
	cout << endl;
    }
}
