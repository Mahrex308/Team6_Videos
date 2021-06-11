#include "Serie.h"
#include "Pelicula.h"
#include <iostream>
#include <string>
using namespace std;

class Videoteca{
    protected:
    Video **inventario;
    int tamano;
    int tamano_mem;

    public:
    Videoteca();
    Videoteca(int);
    Videoteca( Video **, int );

    int getTamano();
    Video ** getInventario();

    void setInventario( Video **, int);

    void agregarVideo(int, Video *);
    void enlistar();
};
