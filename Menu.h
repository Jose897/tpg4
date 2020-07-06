#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/*La idea del menu seria que el main no tenga codigo y todo lo que serian el manejo de las opciones y
lo que ve el usuario se haga con esta clase. Deberia tener como atributos las listas para que a la hora de
mostrarlas acceda a ellas. Eso lo agregamos cuando tengamos las listas ya armadas. (Falta armar la de recomendadas)*/

class Menu{
    public:
        // PRE: Recibe un numero entre 1 y 3
        // POST: Devuelve la opcion que selecciona el usuario
        int mostrar_menu();
        // PRE: -
        // POST: Realiza la tarea que selecciono el  usuario
        void procesar_opcion(int opcion);
        // PRE: Recibe la opcion que selecciona el usuario
        // POST: True si es opcion valida
        //       False si es una opcion invalida
        bool opcion_valida(int entrada);
};
#endif // MENU_H_INCLUDED
