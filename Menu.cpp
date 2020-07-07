/*
 * menu.cpp
 *
 *  Created on: 1 jun. 2020
 *      Author: Santi
 */

#include "menu.h"


void Menu::mostrar_menu(Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas){

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
    	procesar_opcion(opcion,lista_peliculas_vistas, lista_peliculas_no_vistas);
	}
}

bool Menu::opcion_valida(int entrada){
    if (entrada < 1 || entrada > 4){
        return false;
    }
    return true;
}

void Menu::procesar_opcion(int opcion,Lista<Pelicula*> &lista_peliculas_vistas, Lista<Pelicula*> &lista_peliculas_no_vistas){

	switch(opcion){
		case 1: lista_peliculas_vistas.imprimir_lista(); break;
		case 2: lista_peliculas_no_vistas.imprimir_lista(); break;
		case 3: //Recomendadas; break;
		case 4: salir = false ; break;
	}
}
