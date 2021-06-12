#include "Temporada.h"
#include <string>
#include <iostream>
using namespace std;

Temporada::Temporada(){
    num_temporada = 0;
    calif_temp = 0;
    num_episodios = 0;
    ptr_episodios = new Episodio*[1];
    episodios_reg = 0;
    episodios_reg_mem = 1;
}

Temporada::Temporada(int num, float cal, int tot_ep, Episodio ** ep, int ep_reg){
    num_temporada = num;
    calif_temp = cal;
    num_episodios = tot_ep;
    ptr_episodios = ep;
    episodios_reg = ep_reg;
    episodios_reg_mem = ep_reg;
}

int Temporada::getNum_temporada(){return num_temporada;}

float Temporada::getCalificacion_temp(){return calif_temp;}

int Temporada::getNum_episodios(){return num_episodios;}

int Temporada::getEpisodios_reg(){return  episodios_reg;}

Episodio Temporada::get_Episodio(int num_ep){
     if (num_ep <= episodios_reg){
         cout << "Temporada:                  " << num_temporada << endl;
         (*(ptr_episodios[num_ep-1])).print();
         return *ptr_episodios[num_ep-1]; 

    }else{
        cout << "Numero del episodio mayor al numero de episodios registrados" <<endl;
        cout << "Numero total de episodios es: "<< episodios_reg <<endl;
        return Episodio();
    };
    return Episodio();
}

Episodio ** Temporada::get_Ptr_episodios(){
    return ptr_episodios;

}

void Temporada::setNum_episodios(int t_ep){
    num_episodios = t_ep;
}

void Temporada::setNum_temporada( int t_temp){
    num_temporada = t_temp;
}


void Temporada::set_Ptr_episodios(Episodio ** nw_ep, int t){
    ptr_episodios = nw_ep;
    episodios_reg = t;
    episodios_reg_mem = t;
}


void Temporada::agregarEpisodio(Episodio * ep, int n_ep){
    if(episodios_reg+1 > episodios_reg_mem){

        Episodio ** newEp_reg = new Episodio*[episodios_reg*2];
        for (int i=0; i<episodios_reg; i++){
            newEp_reg[i] = ptr_episodios[i];
        }
        newEp_reg[n_ep-1] = ep;
        ptr_episodios = newEp_reg;
        episodios_reg_mem= episodios_reg*2;
        episodios_reg = episodios_reg+1;
    }else{
        ptr_episodios[n_ep-1] = ep;
        episodios_reg++;
    }
    
}


void Temporada::calificaTemporada(){
    calif_temp = verif_calif();
     cout << "Calificacion actualizada exitosamente" << endl;
}


float Temporada::verif_calif(){
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


void Temporada::print(){
    cout <<"Numero de temporada:          " << num_temporada << endl;
    cout <<"Numero de episodios:          " << num_episodios << endl;
    cout <<"Calificacion de temporada:    " << calif_temp   << endl;
    cout <<" " << endl;

    cout << "Episodios registrados:     " << endl;
    for (int j = 0; j< episodios_reg; j++){
            get_Episodio(j+1);
    }
    
}
