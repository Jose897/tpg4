#include "Pelicula.h"
#include "Nodo.h"
#include "Lista.h"
#include <string>

const string NOMBRE_ARCHIVO = "peliculas.txt";
const int MAX_PUNTAJE = 7;
const int CANT_MAX_RECAUDACIONES = 5;
using namespace std;

int main(){
    string nom_direc;
    string nom_peli;
    float val_peli;
    int rec_peli;
    Lista lista_pelis;
    Lista lista_puntajes;
    Lista lista_recaudaciones;
    ifstream archivo_de_lectura(NOMBRE_ARCHIVO);
    if(!archivo_de_lectura.fail()){
        while(archivo_de_lectura >> nom_direc){
            archivo_de_lectura >> nom_peli;
            archivo_de_lectura >> val_peli;
            archivo_de_lectura >> rec_peli;
            Pelicula peli(nom_direc, nom_peli, val_peli, rec_peli);
            lista_pelis.append(peli);
        }
        archivo_de_lectura.close();
    }
    else{
        cout<<"El archivo fallo"<<endl;
    }
    cout<<"Se encontraron datos de "<<lista_pelis.obtener_tam()<<" peliculas."<<endl;
    for( unsigned i = 1; i<=lista_pelis.obtener_tam(); i++){
        if(lista_pelis.consultar(i).obtener_valoracion() >= MAX_PUNTAJE){
            lista_puntajes.append(lista_pelis.consultar(i));
        }
    }
    lista_pelis.mostrar();        //SOLO PARA MOSTRAR LAS LISTAS
    //lista_puntajes.mostrar();     SOLO PARA MOSTRAR LAS LISTAS
    lista_pelis.ordenar();
    for( unsigned i = 1; i<=CANT_MAX_RECAUDACIONES; i++){
        lista_recaudaciones.append(lista_pelis.consultar(i));
    }
    //lista_recaudaciones.mostrar();    //SOLO PARA MOSTRAR LAS LISTAS
    return 0;
}
