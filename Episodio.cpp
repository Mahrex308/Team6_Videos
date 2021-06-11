#include "Episodio.h"
#include <iostream>
using namespace std;


Episodio::Episodio(){
    nom_episodio = "Sin nombre";
    num_episodio = 0;
}

Episodio::Episodio( string nom_ep, int num_ep){
    nom_episodio = nom_ep;
    num_episodio = num_ep;
}

string Episodio::getNom_episodio(){return nom_episodio;};
int Episodio::getNum_episodio(){return num_episodio;}; //// PUNTO Y COMA DESPUES DE Num_episodio

void Episodio::setNom_episodio(string nom){
    nom_episodio = nom;
    cout << " El nombre del episodio ha sido actualizado" << endl;

}

void Episodio::setNum_episodio(int num_ep){
    num_episodio = num_ep;

}

void Episodio::print(){
    cout << "Nombre de Episodio:         " <<nom_episodio <<endl;
    cout << "Numero de Episodio:         " << num_episodio << endl;
    cout << "   " << endl;
}
