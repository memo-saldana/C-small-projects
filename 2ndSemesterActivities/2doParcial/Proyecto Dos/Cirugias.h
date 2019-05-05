#ifndef Cirugias_h
#define Cirugias_h
#include "Fecha.h"
#include "Doctor.h"
#include "Pacientes.h"

class Cirugias{
private:
	int idDoctor, idCirugia, duracion, cantPx, listaPx[10];
	string descripcion;
	Fecha fechaCx;

public:
	// Constructor default
	Cirugias();

	// Metodos de acceso y modificacion
	void setIdDoctor(int idDoctor);
	void setIdCirugia(int idCirugia);
	void setDuracion(int duracion);
	void setDescripcion(string descripcion);
	void setFechaCx(Fecha fechaCx);
	int getIdDoctor();
	int getIdCirugia();
	int getDuracion();
	int getCantPx();
	int getListaPx(int index);
	string getDescripcion();
	Fecha getFechaCx();

	// Metodos funcionales
	bool agregarPaciente(int id);
};

// Constructor default con valores a 0;
Cirugias::Cirugias(){
	idDoctor = 0;
	idCirugia = 0;
	duracion = 0;
	cantPx = 0;
	for(int i = 0; i < 10; i++){
		listaPx[i] = 0;
	}
	descripcion = "";
	Fecha();
}

// Metodos de modificacion para los parametros
void Cirugias::setIdDoctor(int idDoctor){
	this->idDoctor = idDoctor;
}

void Cirugias::setIdCirugia(int idCirugia){
	this->idCirugia = idCirugia;
}

void Cirugias::setDuracion(int duracion){
	this->duracion = duracion;
}

void Cirugias::setDescripcion(string descripcion){
	this->descripcion = descripcion;
}

void Cirugias::setFechaCx(Fecha fechaCx){
	this->fechaCx = fechaCx;
}

// Metodos acceso para los parametros.
int Cirugias::getIdDoctor()	{
	return idDoctor;
}

int Cirugias::getIdCirugia(){
	return idCirugia;
}

int Cirugias::getDuracion(){
	return duracion;
}

int Cirugias::getCantPx(){
	return cantPx;
}

int Cirugias::getListaPx(int index){
	return listaPx[index];
}

string Cirugias::getDescripcion(){
	return descripcion;
}

Fecha Cirugias::getFechaCx(){
	return fechaCx;
}

// Metodo funcional para agregar pacientes.
bool Cirugias::agregarPaciente(int id){
	// True que no hay otro paciente con el mismo id.
	bool flag = true;
	for (int i = 0; i < cantPx; i++){
		// Si se repite el id, el flag es false.
		if (id == listaPx[i]){
			flag = false;
		}
	}

	// Si no se repite y sí hay espacio, se agrega.
	if(cantPx < 10 && flag){
		listaPx[cantPx] = id;
		cantPx ++;
		cout << "El paciente fue agregado.\n";
		return true;
	}
	// Si hay espacio pero se repite, no se agrega.
	else if(!flag){
		cout << "El paciente ya exite.\n";
		return false;
	}
	// Si no hay espacio no se agrega se repita o no.
	else{
		cout << "El paciente debido a falta de espacio.\n";
		return false;
	}
}
#endif /* Cirugias_h */