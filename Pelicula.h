#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Pelicula{
    private:
        string director;
        string nombre;
        float valoracion;
        int recaudacion;

    public:
        Pelicula();
        Pelicula(string direc, string nom, float val, int rec);
        string obtener_director();
        string obtener_nombre();
        float obtener_valoracion();
        int obtener_recaudacion();
};

#endif // PELICULA_H_INCLUDED
