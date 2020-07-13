#include "Menu.h"


void Menu::mostrar_menu(Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas, Lista<Pelicula*> &lista_recomendadas){

	while(salir){
		int opcion;
		cout << "============================= BIENVENIDO AL PROGRAMA =============================" << endl << endl;
		cout << "1. Ver la lista de peliculas vistas." << endl;
		cout << "2. Ver la lista de peliculas no vistas." << endl;
		cout << "3. Ver la lista de peliculas recomendadas." << endl;
		cout << "4. Salir." << endl << endl;
		cout << "Por favor eliga la opcion que desea: " << endl;
		cin >> opcion;
    	while(!opcion_valida(opcion)){
    		cout << "Por favor ingrese una opcion valida: ";
    		cin >> opcion;
    	}
    	procesar_opcion(opcion,lista_peliculas_vistas, lista_peliculas_no_vistas, lista_recomendadas);
	}
}

bool Menu::opcion_valida(int entrada){
    return !(entrada < 1 || entrada > 4);
}

void Menu::procesar_opcion(int opcion,Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas, Lista<Pelicula*> &lista_recomendadas){

	switch(opcion){
		case 1: imprimir_peliculas(lista_peliculas_vistas); break;
		case 2: imprimir_peliculas(lista_peliculas_no_vistas); break;
		case 3: imprimir_peliculas(lista_recomendadas);
            break;
		case 4: salir = false ; break;
	}
}

void Menu:: imprimir_peliculas(Lista<Pelicula*> &lista_peliculas) {
    for (int i = 1; i <= lista_peliculas.obtener_tamanio(); i++) {
        cout << i << "- " << std::endl;
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




