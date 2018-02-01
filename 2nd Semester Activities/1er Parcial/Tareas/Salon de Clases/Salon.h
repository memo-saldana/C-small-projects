#ifndef SALON_H_INCLUDED
#define SALON_H_INCLUDED

Class Salon {

private:
    int Capacidad;
    string NombreClase;
    int Inscritos;
    int NumSalon;

public:
    Salon();
    Salon(int cap, string str, int n, int num);

    void setCapacidad(int n);
    int getCapacidad();

    void setNombreClase(string str);
    string getNombreClase();

    void InscribirAlumnos(int cant);

}

Salon::Salon(){
    Capacidad=0;
    NombreClase="";
    Inscritos=0;
    NumSalon=0;
}
Salon::Salon(int cap, string str, int n, int num){
    Capacidad=cap;
    NombreClase=str;
    Inscritos=n;
    NumSalon=num;
}

void Salon::setCapacidad(int n){
    Capacidad=n;
}
int Salon::getCapacidad(){
    return Capacidad;
}

void Salon::setNombreClase(string str){
    NombreClase=str;
}
string Salon::getNombreClase(){
    return NombreClase;
}

void Salon::InscribirAlumnos(int cant){
    Inscritos+=cant;
}

#endif // SALON_H_INCLUDED
