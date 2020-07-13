#ifndef MENU_H_
#define MENU_H_

#include "Pelicula.h"
#include "Lista.h"
#include <iostream>
using namespace std;

class Menu{
	private:

		bool salir = true;

	public:
        // PRE: Recibe un numero entre 1 y 3
        // POST: Devuelve la opcion que selecciona el usuario
        void mostrar_menu(Lista<Pelicula*> &, Lista<Pelicula*> &, Lista<Pelicula*> &);
        // PRE: -
        // POST: Realiza la tarea que selecciono el  usuario
        void procesar_opcion(int opcion,Lista<Pelicula*> &, Lista<Pelicula*> &, Lista<Pelicula*> &);
        // PRE: Recibe la opcion que selecciona el usuario
        // POST: True si es opcion valida
        // False si es una opcion invalida
        bool opcion_valida(int entrada);
        //Imprimir la lista por pantalla
        //PRE: lista creada y no vacia
        //POST: imprimir la lista por pantalla
        void imprimir_peliculas(Lista<Pelicula*> &);

};


#endif /* MENU_H_ */
