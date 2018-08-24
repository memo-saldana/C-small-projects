#ifndef Figura_h
#define Figura_h
#include "Coordenada.h"

class Figura{

protected:
	string color;
	Coordenada posicion;

public:
	Figura();
	Figura(string,Coordenada);
	Figura(string, int, int);
	void setColor(string);
	void setPosicion(Coordenada);
	void muestra();
};

Figura::Figura(){
	color ="";
	Coordenada();
}
Figura::Figura(string color, int x, int y){
	this->color=color;
	Coordenada nuevo(x,y);
	this->posicion=nuevo;

}
Figura::Figura(string color,Coordenada posicion){
	this->color=color;
	this->posicion=posicion;
}

void Figura::setColor(string color){
	this->color = color;
}

void Figura::setPosicion(Coordenada posicion){
	this->posicion=posicion;
}

void Figura::muestra(){
	cout<<"Color: "<<color<<endl;
	cout<<"Posicion: ";
	posicion.muestra();
	cout<<endl;
}

#endif //Figura_h