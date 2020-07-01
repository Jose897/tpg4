#ifndef TPG4_ARCHIVO_H
#define TPG4_ARCHIVO_H
#include <fstream>
#include <string>
#include "Pelicula.h"
#include <sstream>
using namespace std;
class Archivo{
private:
public:
    Archivo();
    void carga_peliculas(string nombre_archivo, Lista<Pelicula*> &lista);
    ~Archivo();

};

#endif //TPG4_ARCHIVO_H
