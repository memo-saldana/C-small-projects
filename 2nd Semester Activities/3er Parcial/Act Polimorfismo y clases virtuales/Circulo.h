#ifndef Circulo_h_included
#define Circulo_h_included
#include "Figura.h"
class Circulo : public Figura{
private:
	double radio;
public:
	Circulo();
	Circulo(double);
	double getRadio();
	void setRadio(double);
	double calcArea();
	double calcPerimetro();
	void muestraQueSoy();

};

Circulo::Circulo(){
	radio=1;
}
Circulo::Circulo(double radio){
	this->radio=radio;
}
double Circulo::getRadio(){
	return radio;
}
void Circulo::setRadio(double radio){
	this->radio=radio;
}
double Circulo::calcArea(){

	return radio*radio*3.14;
}
double Circulo::calcPerimetro(){
	return radio*2*3.14;
}
void Circulo::muestraQueSoy(){
	cout<<"Soy un circulo."<<endl;
}

#endif