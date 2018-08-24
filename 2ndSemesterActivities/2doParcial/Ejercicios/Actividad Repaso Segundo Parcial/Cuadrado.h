#ifndef Cuadrado_h
#define Cuadrado_h

#include "Figura.h"

class Cuadrado : Figura{

private:

	double lado;

public:
	Cuadrado();
	Cuadrado(string, Coordenada, double);
	Cuadrado(string, int, int, double);
	void muestra();
	double area();
};

Cuadrado::Cuadrado():Figura(){
	lado=0;
}

Cuadrado::Cuadrado(string color,Coordenada posicion, double lado):Figura(color,posicion){
	this->lado=lado;
}

Cuadrado::Cuadrado(string color, int x, int y, double lado):Figura(color, x, y){
	this->lado=lado;	
}

void Cuadrado::muestra(){
	cout<<"Color: "<<color<<endl;
	cout<<"Posicion: ";
	posicion.muestra();
	cout<<endl;
	cout<<"Lado: "<<lado<<endl;
	
}

double Cuadrado::area(){
	return lado*lado;
}

#endif //Cuadrado_h