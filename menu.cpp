/*
 * menu.cpp
 *
 *  Created on: 1 jun. 2020
 *      Author: Santi
 */

#include "menu.h"


Menu::mostrar_menu(){
    int opcion;
    cout << "============================= BIENVENIDO AL PROGRAMA =============================" << endl << endl;
    cout << "1. Ver la lista de peliculas vistas." << endl;
    cout << "2. Ver la lista de peliculas no vistas." << endl;
    cout << "3. Ver la lista de peliculas recomendadas." << endl << endl;
    cout << "Por favor eliga la opcion que desea: " << endl;
    cin >> opcion;
    while(!opcion_valida(opcion)){
        cout << "Por favor ingrese una opcion valida: "
        cin >> opcion;
    }
    return opcion;
}

Menu::opcion_valida(int entrada){
    if (entrada < 1 || entrada > 3){
        return false;
    }
    return true;
}

Menu::procesar_opcion(int opcion){
    if (opcion == 1){
    //MOSTRAR PELIS VISTAS
    }
    else if (opcion == 2){
    //MOSTRAR PELIS NO VISTAS
    }
    else{
    //MOSTRAR PELIS RECOMENDADAS
    }
}
