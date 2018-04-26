#ifndef TiempoParcial_h_included
#define TiempoParcial_h_included
//Incluir clase padre
#include "Empleado.h"

//Herencia de clase Empleado
class TiempoParcial : public Empleado{
private:
	//Atributos especificos de la clase TiempoParcial
	int horasExtra;

public:
	//Constructores
	TiempoParcial();
	TiempoParcial(string, string, int, double, int);

	//Acceso
	int getHorasExtra();

	//Modificacion
	void setHorasExtra(int);

	//Metodos funcionales
	double calcularPago();
	void mostrar();
};

//Constructores
//Default, no recibe datos
TiempoParcial::TiempoParcial():Empleado(){
	horasExtra=0;
}
//Por parametros, recibe datos para cada atributo
TiempoParcial::TiempoParcial(string nombre, string apellidos, int nomina, double sueldoBase, int horasExtra):Empleado(nombre, apellidos, nomina, sueldoBase){
	this->horasExtra = horasExtra;
}

//Acceso

//getHorasExtra regresa el entero que contiene el numero de horas extra del trabajador de tiempo parcial
int TiempoParcial::getHorasExtra(){
	return horasExtra;
}

//Modificacion
//setHorasExtra modifica el numero de horas extra a uno dado
void TiempoParcial::setHorasExtra(int horasExtra){
	this->horasExtra = horasExtra;
}

//Metodos Funcionales

//calcular Pago regresa la suma del sueldo base mas 250 por cada hora extra
double TiempoParcial::calcularPago(){
	return sueldoBase + horasExtra*250;
}

//Muestra los datos del trabajador de tiempo parcial
void TiempoParcial::mostrar(){
	cout<<"Nomina: "<<nomina<<endl;
	cout<<"Nombre: "<<nombre<<" "<<apellidos<<endl;
	cout<<"Saldo Base: $"<<sueldoBase<<endl;
	cout<<"Horas extra trabajadas: "<<horasExtra<<endl;
	cout<<"Monto por horas extra: $"<<calcularPago() - sueldoBase<<endl;
	cout<<"Sueldo Total: "<<calcularPago()<<endl;
}

#endif