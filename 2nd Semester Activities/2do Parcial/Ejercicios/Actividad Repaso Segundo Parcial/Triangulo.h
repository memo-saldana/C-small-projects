#ifndef Triangulo_h
#define Triangulo_h

#include "Figura.h"
class Triangulo : Figura{

private:

	double base,altura;

public:
	Triangulo();
	Triangulo(double,double);
	Triangulo(string, int, int, double, double);
	void muestra();
	double area();
};

Triangulo::Triangulo():Figura(){
	base=0;
	altura=0;
}
Triangulo::Triangulo(double base,double altura):Figura(){
	this->base=base;
	this->altura=altura;
}
Triangulo::Triangulo(string color, int x, int y, double base, double altura):Figura(color,x,y){
	this->base=base;
	this->altura=altura;
}
void Triangulo::muestra(){
	cout<<"Color: "<<color<<endl;
	cout<<"Posicion: ";
	posicion.muestra();
	cout<<endl<<"Base: "<<base<<endl;
	cout<<"Altura: "<<altura<<endl;
}
double Triangulo::area(){
	return (base*altura)/2;
}

#endif //Triangulo_h