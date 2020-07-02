/*
 * menu.h
 *
 *  Created on: 1 jun. 2020
 *      Author: Santi
 */

#ifndef MENU_H_
#define MENU_H_

#include "lista.h"

class Menu : public Lista {

	private:

		bool salir; //variable para terminar un ciclo

	public:

		// Constructor con parametro
		// PRE: -
		// POST: Inicializa salir = true
		Menu();

		// Destructor
		// PRE: -
		// POST: Ninguna
		~Menu();

		// Metodo ingresar_opcion
		// PRE: Ninguna
		// POST: Pide una opcion por pantalla y llama a opciones
		void ingresar_opcion();

		// Metodo opciones
		// PRE: Recibir una opcion
		// POST: Compara la opcion ingresada y llama a la respectiva funcion
		void opciones(int);

		//Metodo pedir_posicion
		//PRE: recibir una posicion valida
		//POST: llamar al metodo del_dato o get_dato con determinada posicion
		void pedir_posicion(bool);

		// Metodo pedir_valores
		// PRE: Ninguna
		// POST: Metodo utilizado para crear un nuevo objeto, pide los valores
		// y llama a crear figura
		void pedir_valores();
};


#endif /* MENU_H_ */
