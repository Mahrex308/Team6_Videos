#include <string>
using namespace std;

#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif

class Pelicula : public Video
{
    protected:
    string clasificacion;

    public:
    Pelicula();
    Pelicula(int, string, string, int, int, string, float = 0);

    string getClasificacion();

    void setClasificacion(string);
    
    void muestraDatos();

};
