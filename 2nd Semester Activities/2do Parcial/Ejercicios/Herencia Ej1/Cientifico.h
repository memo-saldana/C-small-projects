#pragma once
#include "Empleado.h"

class Cientifico : public Empleado{

private:
	int publicaciones;

public:
	Cientifico();
	Cientifico(string nombre, int numero, int publicaciones);

	void mostrar();
};

Cientifico::Cientifico() : Empleado(){

	publicaciones = 0;
}

Cientifico::Cientifico(string nombre, int numero, int publicaciones) : Empleado(nombre, numero){

	this-> publicaciones = publicaciones;
}

void Cienifico::mostrar(){

	cout<< "El cientifico de nombre "<<nombre<<" con edad de "<<numero<<" tiene "<<publicaciones<<" publcicaciones"<<endl;

}
