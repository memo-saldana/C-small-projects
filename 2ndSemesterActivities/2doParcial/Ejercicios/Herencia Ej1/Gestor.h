#pragma once
#include "Empleado.h"

class Gestor : public Empleado{

private:
	string titulo;
	int cuota;

public:
	Gestor();
	Gestor(string nombre, int numero, string titulo, int cuota);

	void mostrar();
};

Gestor::Gestor() : Empleado(){

	titulo = ""; 
	cuota = 0;
}

Gestor::Gestor(string nombre, int numero, string titulo, int cuota) : Empleado(nombre, numero){

	this-> titulo = titulo;
	this-> cuota = cuota;
}

void Cienifico::mostrar(){

	cout<< "El gestor de nombre "<<nombre<<" con edad de "<<numero<<" tiene el titulo "<<titulo<<" y tiene una cuota de "<<cuota<<"."<<endl;

}
