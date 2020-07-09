/*La idea es poner un metodo aparte para que cuando llamemos al metodo 'carga_lista_recomendadas'
le pasemos la lista de actores de las peliculas que estamos comparando y tira true si hay algun
actor repetido o tira false si no hay coincidencias.
Todavia falta que hagamos funcionar bien la lista de actores y bueno despues solo le tendriamos
que agregar el metodo que yo llame "obtener actor"*/
bool Menu::comparar_actores(Lista <string> lista_actores1, Lista <string> lista_actores2){
    bool coincidencia = false;
    for(int i = 1; i <= lista_actores1.obtener_tamanio(); i++){
        string actor = lista_actores1.obtener_actor(i);
        if(coincidencia == false){
            for(int j = 1; j <= lista_actores2.obtener_tamanio(); j++){
                if(lista_actores1.obtener_actor(j) == actor){
                    coincidencia = true;
                }
            }
        }
        else{
            break;
        }
    }
    return coincidencia;
}
