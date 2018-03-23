
#pragma once

class Persona {

protected:
	int identidad;
	string nombre;

public: 
	Persona();
	Persona(int identidad, string nombre);
	void setIdentidad(int identidad);
	void setNombre(string nombre);
	int getIdentidad();
	string getNombre();
	void muestraPersona();


};


Persona::Persona(){
	identidad = 0;
	nombre = "";
}

Persona::Persona(int identidad, string nombre){
	this-> identidad = identidad;
	this-> nombre = nombre;
}
void Persona::setIdentidad(int identidad){
	this-> identidad = identidad;
}
void Persona::setNombre(string nombre){
	this-> nombre = nombre;
}
int Persona::getIdentidad(){
	return identidad;
}
string Persona::getNombre(){
	return nombre;
}
void Persona::muestraPersona(){
	cout<<"ID: "<<identidad<<endl;
	cout<<"Nombre: "<<nombre<<endl;
}
