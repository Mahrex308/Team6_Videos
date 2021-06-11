#include "Pelicula.h"
#include <iostream>
#include <string>
using namespace std;

Pelicula::Pelicula(){
    id = 0;
    tipoVideo = "Pelicula";
    nombreVideo = "Sin nombre";
    genero = "Sin genero";
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
    clasificacion = "Sin clasificacion";
}

Pelicula::Pelicula(int id_p, string nomVid, string gen, int anio, int dur, string clas, float calif ){
    id = id_p;
    tipoVideo = "Pelicula";
    nombreVideo = nomVid;
    genero = gen;
    calificacion = calif;
    anioLanzamiento = anio;
    duracion = dur;
    clasificacion = clas;
}

string Pelicula::getClasificacion(){return clasificacion;}


void Pelicula::setClasificacion(string clasif){
    clasificacion = clasif;
    cout << "Clasificacion actualizada exitosamente" << endl;

}


void Pelicula::muestraDatos(){
    cout << "ID de Video:               " << id << endl;
    cout << "Tipo de Video:             " << tipoVideo << endl;
    cout << "Nombre de Video:           " << nombreVideo << endl;
    cout << "Genero:                    " << genero  << endl;
    cout << "Calificacion:              " << calificacion  << endl;
    cout << "Anio de Lanzamiento:       " << anioLanzamiento  << endl;
    cout << "Duracion:                  " << duracion  << " minutos" <<endl;
    cout << "Clasificacion:             " << clasificacion <<endl;
}
