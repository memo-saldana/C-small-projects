#pragma once

class Rectangulo : public Figura{

private: 
	double dBase, dAltura;

public:
	Rectangulo();
	Rectangulo(Punto centro, string sColor, double dBase, double dAltura);
	void setdBase(double dBase);
	double getdBase();
	void setdAltura(double dAltura);
	double getdAltura();
	double calcularArea();
	double calcularPerimetro();
	void desplegar();

};


Rectangulo::Rectangulo() : Figura(){
	dBase = 1;
}

Rectangulo::Rectangulo(Punto centro, string sColor, double dBase, double dAltura){
	this->centro = centro;
	this->sColor = sColor;
	this->dBase = dBase;
	this->dAltura = dAltura;
}
void Rectangulo::setdBase(double dBase){
	this->dBase = dBase;
}
double Rectangulo::getdBase(){
	return dBase;
}

double Rectangulo::getdAltura(){
	return dAltura;
}
void Rectangulo::setdAltura(double dAltura){
	this->dAltura = dAltura;
}


double Rectangulo::calcularArea(){
	return dBase * dAltura;
}
double Rectangulo::calcularPerimetro(){
	return 2*(dBase + dAltura);
}
void Rectangulo::desplegar(){
	Figura::desplegar();

	cout<< "Base = "<<dBase<<endl;

	cout<< "Altura = "<<dAltura<<endl;

}