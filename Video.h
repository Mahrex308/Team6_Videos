#include <string>

using namespace std;

class Video{

protected:
    int id;
    string tipoVideo;
    string nombreVideo;
    string genero;
    float calificacion;
    int anioLanzamiento;
    int duracion;

public:
    Video();
    Video(int, string, string, string, int, int, float = 0);

    int getId();
    string getTipoVideo();
    string getNombreVideo();
    string getGenero();
    float getCalificacion();
    int getAnioLanzamiento();
    int getDuracion();

    void setId(int);
    void setTipoVideo(string);
    void setNombreVideo(string);
    void setGenero(string);
    void setAnioLanzamiento(int);
    void setDuracion(int);
    virtual void calificaVideo(float = 0);

    virtual void muestraDatos();
    float verif_calif();
};
