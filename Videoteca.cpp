#include "Videoteca.h"

Videoteca::Videoteca(){
    inventario = new Video*[1];
    tamano = 0;
    tamano_mem =1;
}

Videoteca::Videoteca(int tam){
    inventario = new Video*[tam];
    tamano = tam;
    tamano_mem = tam;

}

Videoteca::Videoteca( Video ** nw_inv, int t){
    inventario = nw_inv;
    tamano = t;
    tamano_mem = t;
}

int Videoteca::getTamano(){return tamano;}

Video ** Videoteca::getInventario(){ return inventario;}


void Videoteca::setInventario( Video ** nw_inv, int t){
    inventario = nw_inv;
    tamano = t;
    tamano_mem = t;
}

void Videoteca::agregarVideo(int id, Video * v ){

     if(tamano+1 > tamano_mem){

        Video ** newInventario = new Video*[tamano*2];
        for (int i=0; i<tamano; i++){
            newInventario[i] = inventario[i];
        }
        newInventario[id-1] = v;
        inventario = newInventario;
        tamano_mem= tamano*2;
        tamano = tamano+1;
    }else{
        inventario[id-1] = v;
        tamano++;
    }
}


void Videoteca::enlistar(){
    for (int i = 0; i< tamano; i++){
        (*(inventario[i])).muestraDatos();
        cout << "" << endl;
    }
}
