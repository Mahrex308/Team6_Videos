#include "Videoteca.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
  //Creando peliculas,series (episodios&temporadas)
  Pelicula p1(1,"Avengers","Ciencia Ficcion",2012,142,"PG-13");
  Pelicula p2(2,"Avatar","Ciencia Ficcion",2009,162,"PG-13");
  
  Episodio ep1("Los Monstruos no hacen cosquillas",1);
  Episodio ep2("Todo el mundo tiene un secreto",2);
  Episodio ep1_1("Con que suenan los peces?",1);
  Episodio ep2_1("Persiguiendo luciernagas",2);
  
  Episodio ep1_2("Se un capitan",1);
  Episodio ep2_2("Hacemos jabon",2);
  Episodio ep1_22("Descenso",1);
  Episodio ep2_22("Bienvenido a segunda",2);

  Episodio * eps1[2] = {&ep1,&ep2};
  Episodio * eps2[2] = {&ep1_1,&ep2_1};
  Episodio * eps3[2] = {&ep1_2,&ep2_2};
  Episodio * eps4[2] = {&ep1_22,&ep2_22};


  Temporada t1(1,4,18,eps1,2);
  Temporada t2(2,5,20,eps2,2);
  
  Temporada t11(1,3,24,eps3,2);
  Temporada t22(2,5,11,eps4,2);
  
  Temporada * temps1[2] = {&t1,&t2};
  Temporada * temps2[2] = {&t11,&t22};

  Serie s1(3,"El Internado Laguna Negra","Suspenso",2007,75,5,38,temps1,2);
  Serie s2(4,"Club de Cuervos","Comedia",2015,45,6,35,temps2,2);
  
  Video * videos[4] = {&p1, &p2, &s1, &s2};
  //Creando Videoteca Y Agregando videos
  cout << "Creando Videoteca y agregando series y peliculas" << endl;
  Videoteca v1 = Videoteca(videos, 4);

  //calificar videos
  cout << "Calificaciones de 1 a 5" << endl;
   cout << " " << endl;
  cout << "Evaluando pelicula Avengers" << endl;
  p1.calificaVideo();
  cout << " " << endl;
  cout << "Evaluando pelicula Avatar" << endl;
  cout << " " << endl;
  p2.calificaVideo();
  cout << " " << endl;

  cout << "Evaluando temporada 1 de serie El Internado Laguna Negra " << endl;
  t1.calificaTemporada();
  cout << " " << endl;
  cout << "Evaluando temporada 2 de serie El Internado Laguna Negra " << endl;
  t2.calificaTemporada();
  cout << " " << endl;
  
  cout << "Evaluando temporada 1 de serie Club de Cuervos " << endl;
  t11.calificaTemporada();
  cout << " " << endl;
  cout << "Evaluando temporada 2 de serie Club de Cuervos " << endl;
  t22.calificaTemporada();
  s1.calificaVideo();
  s2.calificaVideo();

  //Enlistar
  cout << "" <<endl;
  cout << "Inventario completo" <<endl;
  v1.enlistar();
  cout << "Fin de inventario" << endl;
  return 0;

};
