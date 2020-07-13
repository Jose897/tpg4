#include "Archivo.h"
#include <fstream>
Archivo::Archivo() {
}

Archivo:: ~Archivo() {

}

void Archivo::carga_peliculas(const string nombre_archivo, Lista<Pelicula*> &lista){
    string titulo_pelicula;
    string director_pelicula;
    string genero_pelicula;
    string puntaje_pelicula;
    string actores_pelicula;
    string espacio;
    ifstream archivo(nombre_archivo);
    if(archivo.is_open()){
        while(!archivo.eof()){
            getline(archivo, titulo_pelicula);
            getline(archivo, genero_pelicula);
            getline(archivo, puntaje_pelicula);
            getline(archivo, director_pelicula);
            getline(archivo, actores_pelicula);
            getline(archivo, espacio);
            stringstream linea_puntaje(puntaje_pelicula);
            int puntaje;
            linea_puntaje >> puntaje;
            Pelicula *pelicula = new Pelicula(titulo_pelicula, genero_pelicula, puntaje, director_pelicula,separar_actores(actores_pelicula));
            lista.insertar(pelicula);
        }
        archivo.close();
    }
    else{
        throw "El archivo no existe!!!\n";
    }
}



Lista <string*>* Archivo::separar_actores(string actores_pelicula){
	Lista <string*>* l_actores = new Lista <string*>;
	istringstream isstream(actores_pelicula);
	while(!isstream.eof()){
		string actor;
	    	isstream >> actor;
		if( (int)actor[0] != 0 ){
	    		string* actor_puntero = new string(actor);
	    		l_actores->insertar(actor_puntero);
		}
	}
	return l_actores;
}
/*Lista<Pelicula*> Archivo::carga_lista_recomendadas(Lista<Pelicula*> &lista_vistas, Lista<Pelicula*> &lista_no_vistas){
    
	Lista<Pelicula*> lista_recomendadas;
	for (unsigned i = 1; i <= lista_no_vistas.obtener_tamanio(); i++) {
    	if(lista_no_vistas.obtener_dato(i)->obtener_puntaje() >= 7 ){
                lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
	}else{	
		for(unsigned j = 1; j <= lista_vistas.obtener_tamanio(); j++){
			if(lista_no_vistas.obtener_dato(i)->obtener_genero() == lista_vistas.obtener_dato(j)->obtener_genero() ){
				if( lista_no_vistas.obtener_dato(i)->obtener_director() == lista_vistas.obtener_dato(j)->obtener_director() ){
					lista_recomendadas.insertar( lista_no_vistas.obtener_dato(i) );
				}else{
					Lista<string*>* puntero_vistas;
					Lista<string*>* puntero_no_vistas;
					puntero_vistas = lista_vistas.obtener_dato(j)->obtener_actores();
					puntero_no_vistas = lista_no_vistas.obtener_dato(i)->obtener_actores();
						
					for(unsigned k = 1; k <=puntero_no_vistas->obtener_tamanio() ; k++){
						for(unsigned l = 1; l <=puntero_vistas->obtener_tamanio() ; l++){
							if( *puntero_no_vistas->obtener_dato(k) == *puntero_vistas->obtener_dato(l) ){
								lista_recomendadas.insertar( lista_no_vistas.obtener_dato(i) );
							}
						}
					}

				}
			}	
			
		}
		}
    }
	return lista_recomendadas;
}*/

Lista<Pelicula*> Archivo::carga_lista_recomendadas(Lista<Pelicula*> &lista_vistas, Lista<Pelicula*> &lista_no_vistas){
    Lista<Pelicula*> lista_recomendadas;
    for (int i = 1; i <= lista_no_vistas.obtener_tamanio(); i++) {
        if( lista_no_vistas.obtener_dato(i)->obtener_puntaje() >= 7){
            lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
        }
        else{
            for(int j = 1; j<=lista_vistas.obtener_tamanio(); j++) {
                if(lista_vistas.obtener_dato(j)->obtener_genero() == lista_no_vistas.obtener_dato(i)->obtener_genero()) {
                    lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                    if(lista_vistas.obtener_dato(j)->obtener_director() == lista_no_vistas.obtener_dato(i)->obtener_director()){
                        lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                    }
                    else{
                        for (int k = 1; k <= lista_no_vistas.obtener_dato(i)->obtener_actores()->obtener_tamanio(); k++){
                            for (int z = 1; z <= lista_vistas.obtener_dato(j)->obtener_actores()->obtener_tamanio(); z++){
                                if (*lista_no_vistas.obtener_dato(i)->obtener_actores()->obtener_dato(k) == *lista_vistas.obtener_dato(j)->obtener_actores()->obtener_dato(z)){
                                    lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return lista_recomendadas;
}