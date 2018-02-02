#ifndef SALON_H_INCLUDED
#define SALON_H_INCLUDED

class Salon {

private:
    //Atributos privados
    int capacidad,inscritos,numSalon;
    string nombreClase;

public:
    //Constructores default y con parametros
    Salon();
    Salon(int cap, string str, int n, int num);

    //Metodos de accesso y modificacion para cada variable.
    void setCapacidad(int n);
    int getCapacidad();

    void setNombreClase(string str);
    string getNombreClase();

    void setInscritos(int n);
    int getInscritos();

    void setNumSalon(int n);
    int getNumSalon();

    //Metodo para inscribir mas alumnos.
    void inscribirAlumnos(int cant);

};

//Implementacion de constructores y metodos.

Salon::Salon(){
    capacidad=0;
    nombreClase="";
    inscritos=0;
    numSalon=0;
}
Salon::Salon(int cap, string str, int n, int num){
    capacidad=cap;
    nombreClase=str;
    inscritos=n;
    numSalon=num;
}

void Salon::setCapacidad(int n){
    capacidad=n;
}
int Salon::getCapacidad(){
    return capacidad;
}

void Salon::setNombreClase(string str){
    nombreClase=str;
}
string Salon::getNombreClase(){
    return nombreClase;
}

void Salon::setInscritos(int n){
    inscritos=n;
}

int Salon::getInscritos(){
    return inscritos;
}

void Salon::setNumSalon(int n){
    numSalon=n;
}
int Salon::getNumSalon(){
    return numSalon;
}

//Se le suma la cantidad dada a los inscritos actualmente.
void Salon::inscribirAlumnos(int cant){
    inscritos+=cant;
}

#endif // SALON_H_INCLUDED
