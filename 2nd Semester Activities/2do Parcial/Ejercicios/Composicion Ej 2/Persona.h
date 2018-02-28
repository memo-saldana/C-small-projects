#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "Fecha.h"


class Persona{
private:
    string nombre;
    char genero;
    Fecha fechaNacimiento;

public:

    //Constructores
    Persona();
    Persona(string nombre, char genero, Fecha fechaNacimiento);

    //Metodos de acceso
    string getnombre();
    char getGenero();
    Fecha getfechaNacimiento();

    //Metodos de modificacion
    void setNombre(string nombre);
    void setGenero(char genero);
    void setfechaNacimiento(Fecha fechaNacimiento);

    void muestra();
    int calculaEdad();

};

    //Constructores
Persona::Persona(){
    nombre="";
    genero=' ';
    Fecha();
}

Persona::Persona(string nombre, char genero, Fecha fechaNacimiento){
    this->nombre=nombre;
    this->genero=genero;
    this->fechaNacimiento=fechaNacimiento;
}

    //Metodos de acceso
string Persona::getnombre(){
    return nombre;
}

char Persona::getGenero(){
    return genero;
}

string Persona::getArtista(){
    return artista;
}

Fecha Persona::getfechaNacimiento(){
    return fechaNacimiento;
}

//Metodos de modificacion
void Persona::setNombre(string nombre){
    this->nombre=nombre;
}

void Persona::setGenero(char genero){
    this->genero=genero;
}

void Persona::setfechaNacimiento(Fecha fechaNacimiento){
    this->fechaNacimiento=fechaNacimiento;
}


void Persona::muestra(){
    cout<<"Persona: "<<nombre<<endl;
    cout<<"Fecha de Nacimiento: ";
    fechaNacimiento.muestra();
}

int Persona::calculaEdad(){
    int edad=2018-fechaNacimiento().getAnio();
    if(fechaNacimiento.getMes()>2&&fechaNacimiento.getDia()>22 || fechaNacimiento.getMes()==2&&fechaNacimiento.getDia()>22 ||fechaNacimiento.getMes()==2d&&fechaNacimiento.getDia()==22){
        edad--;
    }
    return edad;

}


#endif // PERSONA_H_INCLUDED
