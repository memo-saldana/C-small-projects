#pragma once

class Circulo : public Figura{

private: 
	double dRadio;

public:
	Circulo();
	Circulo(double dRadio);
	Circulo(Punto centro, string sColor, double dRadio);
	void setdRadio(double dRadio);
	double getdRadio();
	double calcularArea();
	double calcularPerimetro();
	void desplegar();

};


Circulo::Circulo() : Figura(){
	dRadio = 1;
}
Circulo::Circulo(double dRadio) : Figura(){
	this->dRadio = dRadio;
}
Circulo::Circulo(Punto centro, string sColor, double dRadio) : Figura(centro,sColor){
	this->dRadio = dRadio;
}
void Circulo::setdRadio(double dRadio){
	this->dRadio = dRadio;
}
double Circulo::getdRadio(){
	return dRadio;
}
double Circulo::calcularArea(){
	return pow(dRadio,2) * 3.141592;
}
double Circulo::calcularPerimetro(){
	return 2*dRadio * 3.141592;
}
void Circulo::desplegar(){
	Figura::desplegar();

	cout<< "Radio = "<<dRadio<<endl;

}