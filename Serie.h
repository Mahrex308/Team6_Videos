#include <string>
#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Temporada.h"
#endif
using namespace std;

#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif

class Serie : public Video
{
    protected:
    int num_temporadas;
    int num_episodios;
    Temporada **ptr_temporadas;
    int num_temp_mem ;
    int num_temp_reg ;

    public:
    Serie();
    Serie(int, string, string, int, int, int, int,Temporada **, int);

    int getNum_temporadas();
    int getNum_episodios();
    Temporada getTemporada(int);
    Temporada ** getPtr_Temporadas();

    void setNum_temporadas(int);
    void setNum_episodios_total(int);
    void setTemporada(int, Temporada *);
    void setPtr_temporadas(Temporada **, int);
    float calificaVideo();

    void muestraDatos();
};
