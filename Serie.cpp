#include "Serie.h"
#include <string>

#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Temporada.h"
#endif

#include <iostream>
using namespace std;


Serie::Serie(){
    id = 0;
    nombreVideo = "Sin nombre" ;
    genero = "Sin genero";
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
    tipoVideo = "Serie";
    num_temporadas = 0;
    num_temp_mem = 1;
    num_episodios = 0;
    ptr_temporadas = new Temporada*[1];
}
 

Serie::Serie(int id_p, string nomVid, string gen, int anio, int dur, int numtemp, int numep, Temporada ** temps, int t_reg){
    id = id_p;
    tipoVideo = "Serie";
    nombreVideo = nomVid;   
    genero = gen;
    anioLanzamiento = anio;
    duracion = dur;
    num_temporadas = numtemp;
    num_temp_mem = t_reg;
    num_temp_reg = t_reg;
    num_episodios = numep;
    ptr_temporadas = temps;
    calificacion = calificaVideo();
}


int Serie::getNum_temporadas(){return num_temporadas;}
int Serie::getNum_episodios(){return num_episodios;}


Temporada Serie::getTemporada(int n){
    if ((n > 0) && (n <= num_temp_reg)){;
        (*ptr_temporadas[n-1]).print();
        return *ptr_temporadas[n-1];
    }else{
        cout << "Numero de temporada no valido" << endl;
        return Temporada();
    }
    return Temporada();

}


Temporada ** Serie::getPtr_Temporadas(){
    return ptr_temporadas;
}


void Serie::setNum_temporadas(int nt){
    if(nt < 1){
        cout << "El numero de temporadas no se actualizo, el minimo es una temporada" << endl;;
    }else{
        num_temporadas = nt;   
        cout << "Numero de temporadas actualizado exitosamente" << endl;
    }

}


void Serie::setNum_episodios_total(int n_ep){
    if(n_ep < 1){
        cout << "El numero de episodios no se actualizo, el minimo es un episodio" << endl;;
    }else{
        num_episodios = n_ep;   
        cout << "Numero de episodios actualizado exitosamente" << endl;
    }

}


void Serie::setTemporada(int n , Temporada * t){

    if(num_temp_reg+1 > num_temp_mem){
        Temporada ** newptr_temporadas = new Temporada*[num_temp_reg*2];
        for (int i=0; i<num_temp_reg; i++){
            newptr_temporadas[i] = ptr_temporadas[i];
        }
        newptr_temporadas[n-1] = t;
        ptr_temporadas = newptr_temporadas;
        num_temp_mem = num_temp_reg*2;
        num_temp_reg = num_temp_reg+1;
    }else{
        ptr_temporadas[n-1] = t;
        num_temp_reg++;
    }

    
}


void Serie::setPtr_temporadas(Temporada ** nw_temp, int t){
    ptr_temporadas = nw_temp;
    num_temp_reg = t;
    num_temp_mem = t;
}


void Serie::muestraDatos(){
    cout << "Informacion de Video:      " << endl;
    cout << "ID de Video:               " << id << endl;
    cout << "Tipo de Video:             " << tipoVideo << endl;
    cout << "Nombre de Video:           " << nombreVideo << endl;
    cout << "Genero:                    " << genero  << endl;
    cout << "Calificacion:              " << calificacion  << endl;
    cout << "Anio de Lanzamiento:       " << anioLanzamiento  << endl;
    cout << "Duracion por episodio:     " << duracion  << " minutos" <<endl;
    cout << "Numero temporadas:         " << num_temporadas << endl;
    cout << "Numero episodios:          " << num_episodios << endl;
    cout <<" " << endl;
    cout << "Temporadas registradas:    " << endl;
    cout <<" " << endl;
     for (int i = 0; i< num_temp_reg; i++){
         cout << "Informacion temporada:    " << endl;
        (*ptr_temporadas[i]).print();
    }
}


float Serie::calificaVideo(){
    float calif = 0;
    for (int i = 0; i< num_temp_reg; i++){
        calif = calif + (*ptr_temporadas[i]).getCalificacion_temp();
    }
    calificacion = calif/(float)num_temp_reg;
    return calificacion;

}
