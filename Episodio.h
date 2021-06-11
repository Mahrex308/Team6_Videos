#include <string>
using namespace std;


class Episodio{

public:
    string nom_episodio;
    int num_episodio; /////// punto y coma

public:
    Episodio();
    Episodio(string,int);

    string getNom_episodio();
    int getNum_episodio();
    
    void setNom_episodio(string);
    void setNum_episodio(int); 
    
    void print();


};
