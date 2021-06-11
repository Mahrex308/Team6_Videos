#include "Episodio.h"
#include <string>
using namespace std;

class Temporada
{
    protected:
    int num_temporada;
    float calif_temp;
    int num_episodios;
    int episodios_reg;
    int episodios_reg_mem;
    Episodio ** ptr_episodios;

    public:
    Temporada();
    Temporada(int, float, int, Episodio **, int);

    
    float getCalificacion_temp();
    int getNum_temporada();
    int getNum_episodios();
    int getEpisodios_reg();
    Episodio get_Episodio(int);
    Episodio ** get_Ptr_episodios();

    void setNum_episodios(int);
    void setNum_temporada(int);
    void set_Ptr_episodios(Episodio **, int); 
    void agregarEpisodio(Episodio *, int);
    void calificaTemporada();
    
    float verif_calif();
    void print();

    

};
