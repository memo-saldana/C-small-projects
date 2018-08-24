#ifndef Gato_h_included
#define Gato_h_included

#include "Animal.h"

class Gato : public 	Animal{
private:

public:
	Gato();
	Gato(string, int);
	void habla();
	void muestra();


};

Gato::Gato():Animal(){

}

Gato::Gato(string nombre, int edad):Animal(nombre, edad){

}
void Gato::habla(){
	cout<<"MIAU"<<endl;
}
void Gato::muestra(){
	cout<<"Soy el gato "<<nombre<<" de edad: "<<calculaEdad()<<" años."<<endl;
}




#endif