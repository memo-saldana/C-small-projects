#ifndef Perro_h_included
#define Perro_h_included

#include "Animal.h"

class Perro : public Animal{

public:
	Perro();
	Perro(string, int);
	void habla();
	void muestra();


};

Perro::Perro():Animal(){

}

Perro::Perro(string nombre, int edad):Animal(nombre, edad){

}
void Perro::habla(){
	cout<<"GUAU"<<endl;
}
void Perro::muestra(){
	cout<<"Soy el perro "<<nombre<<" de edad: "<<calculaEdad()<<" años."<<endl;
}




#endif