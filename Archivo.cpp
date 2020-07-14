#include "Archivo.h"
#include <fstream>

const string EXCEPCION = "Error al encontrar el archivo solicitado";

Archivo::Archivo() {
    excepcion = false;
}

Archivo:: ~Archivo() {
}

bool Archivo::hay_excepcion(){
    if(excepcion){
        cout << endl << "Lo lamento, el programa no se logro ejecutar por la inexistencia de archivos solicitados :(" << endl;
    }
    return excepcion;
}

void Archivo::carga_peliculas(const string nombre_archivo, Lista<Pelicula*> &lista){
    string titulo_pelicula;
    string director_pelicula;
    string genero_pelicula;
    string puntaje_pelicula;
    string actores_pelicula;
    string espacio;
    try{
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
            throw EXCEPCION;
        }
    }
    catch(const string e){
        excepcion = true;
        cout << "Ha ocurrido una excepcion del tipo '" << e << "'." << endl;
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

Lista<Pelicula*> Archivo::carga_lista_recomendadas(Lista<Pelicula*> &lista_vistas, Lista<Pelicula*> &lista_no_vistas){
    Lista<Pelicula*> lista_recomendadas;
    for (int i = 1; i <= int(lista_no_vistas.obtener_tamanio()); i++) {
        if( lista_no_vistas.obtener_dato(i)->obtener_puntaje() >= 7){
            lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
        }
        else{
            for(int j = 1; j <= int(lista_vistas.obtener_tamanio()); j++) {
                if(lista_vistas.obtener_dato(j)->obtener_genero() == lista_no_vistas.obtener_dato(i)->obtener_genero()) {
                    if(lista_vistas.obtener_dato(j)->obtener_director() == lista_no_vistas.obtener_dato(i)->obtener_director()){
                        lista_recomendadas.insertar(lista_no_vistas.obtener_dato(i));
                    }
                    else{
                        for (int k = 1; k <= int(lista_no_vistas.obtener_dato(i)->obtener_actores()->obtener_tamanio()); k++){
                            for (int z = 1; z <= int(lista_vistas.obtener_dato(j)->obtener_actores()->obtener_tamanio()); z++){
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
