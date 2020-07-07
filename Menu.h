#ifndef MENU_H_
#define MENU_H_

#include "Pelicula.h"
#include "Lista.h"
#include <iostream>
using namespace std;
/*La idea del menu seria que el main no tenga codigo y todo lo que serian el manejo de las opciones y
lo que ve el usuario se haga con esta clase. Deberia tener como atributos las listas para que a la hora de
mostrarlas acceda a ellas. Eso lo agregamos cuando tengamos las listas ya armadas. (Falta armar la de recomendadas)*/
class Menu{
	private:
		bool salir = true;
        Lista<Pelicula*> lista_recomendadas;

public:
        // PRE: Recibe un numero entre 1 y 3
        // POST: Devuelve la opcion que selecciona el usuario
        void mostrar_menu(Lista<Pelicula*> &, Lista<Pelicula*> &);
        // PRE: -
        // POST: Realiza la tarea que selecciono el  usuario
        void procesar_opcion(int opcion,Lista<Pelicula*> &, Lista<Pelicula*> &);
        // PRE: Recibe la opcion que selecciona el usuario
        // POST: True si es opcion valida
        //       False si es una opcion invalida
        bool opcion_valida(int entrada);
        void imprimir_peliculas(Lista<Pelicula*> &);
        void carga_lista_recomendadas(Lista<Pelicula*> &lista_vistas, Lista<Pelicula*> &lista_no_vistas);

};


#endif /* MENU_H_ */
