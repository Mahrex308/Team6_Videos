#ifndef VIDEO_H
#define VIDEO_H
#include "Video.h"
#endif
#include <iostream>
using namespace std;

Video::Video(){
    id = 0;
    tipoVideo = "-";
    nombreVideo = "-" ;
    genero = "-";
    calificacion = 0.0;
    anioLanzamiento = 0;
    duracion = 0; 
}

Video::Video(int id_v, string tV_v, string nV_v, string gen_v, int aL_v, int dur_v,float cal_v){
    id = id_v;
    tipoVideo = tV_v;
    nombreVideo = nV_v;
    genero = gen_v;
    calificacion = cal_v;
    anioLanzamiento = aL_v;
    duracion = dur_v;
}

int Video::getId(){
    return id;
}

string Video::getTipoVideo(){
    return tipoVideo;
}

string Video::getNombreVideo(){
    return nombreVideo;
}

string Video::getGenero(){
    return genero;
}

float Video::getCalificacion(){
    return calificacion;
}

int Video::getAnioLanzamiento(){
    return anioLanzamiento;
}

int Video::getDuracion(){
    return duracion;
}

void Video::setId(int i){
    if(i<=0){
        cout << "El id no se actualizo, ya que "<< i << " no es un id valido" << endl;
    }else{
        id = i;   
        cout << "ID actualizado exitosamente" << endl;
    }
}

void Video::setTipoVideo(string tV){
    tipoVideo = tV;
    cout << "Tipo de video actualizado exitosamente" << endl;
}

void Video::setNombreVideo(string nV){
    nombreVideo = nV;
    cout << "Nombre de video actualizado exitosamente" << endl;
}

void Video::setGenero(string g){
    genero = g;
    cout << "Genero actualizado exitosamente" << endl;
    
}

void Video::setAnioLanzamiento(int aL){
    if(aL<=1800){
        cout << "El anio no se actualizo, ya que "<< aL << " no es un anio valido" << endl;
    }else{
        anioLanzamiento = aL;
        cout << "Anio de lanzamiento actualizado exitosamente" << endl;   
    }
    
}

void Video::setDuracion(int d){
    if(d<=0){
        cout << "La duracion no se actualizo, ya que "<< d << " no es una duracion valida" << endl;
    }else{
        duracion = d;  
        cout << "Duracion actualizada exitosamente" << endl;
    }
    
}

void Video::calificaVideo(float c){
    calificacion = verif_calif();
    cout << "Calificacion actualizada exitosamente" << endl;
}

void Video::muestraDatos(){
    cout << "ID de Video:               " << id << endl;
    cout << "Tipo de Video:             " << tipoVideo << endl;
    cout << "Nombre de Video:           " << nombreVideo << endl;
    cout << "Genero:                    " << genero  << endl;
    cout << "Calificacion:              " << calificacion  << endl;
    cout << "Anio de Lanzamiento:       " << anioLanzamiento  << endl;
    cout << "Duracion:                  " << duracion  << " minutos" <<endl;
} 

float Video::verif_calif(){
    float calificacion = -1;
    bool valido = false;
    do{
     cout <<"Indica la calificacion: "; 
     cin>> calificacion;
     if((calificacion<1) || (calificacion > 5)){
        cout << "La calificacion no se actualizo, ya que "<< calificacion << " no es una calificacion valida" << endl;
     }else{
         valido = true;
     }
                                
    }while(valido == false);
    return calificacion;
};
