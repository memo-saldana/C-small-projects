#ifndef Comisionista_h_included
#define Comisionista_h_included
//Incluir clase padre
#include "Empleado.h"

//Herencia de clase Empleado
class Comisionista: public Empleado{
private:
	//Atributos especificos para comisionista
	double cantVendida;

public:
	//Constructores
	Comisionista();
	Comisionista(string, string,int, double, double);

	//Metodos de Acceso
	double getCantVendida();

	//Metodos de Modificación
	void setCantVendida(double);
	
	//Metodos funcionales
	double calcularPago();
	void mostrar();
};

//Constructores
//Default, no recibe datos
Comisionista::Comisionista():Empleado(){
	cantVendida = 0;
}
//Por parametros, recibe datos para cada atributo
Comisionista::Comisionista(string nombre,string apellidos,int nomina, double saldoBase, double cantVendida) : Empleado(nombre,apellidos,nomina,saldoBase){
	this->cantVendida = cantVendida;
}

//Acceso
//getCantVendida regresa el numero decimal que contiene la cantidad vendida por el comisionista
double Comisionista::getCantVendida(){
	return cantVendida;
}

//Modificación
//setCantVendida modifica la canidad vendida a una dadas
void Comisionista::setCantVendida(double cantVendida){
	this->cantVendida = cantVendida;
}

//Metodos funcionales
//Refresa la suma del sueldo base mas la comision por la cantidad vendida
double Comisionista::calcularPago(){
	//Si es mayor a 35,000, se le da un 10% del sueldo base
	if(cantVendida>35000){
		return sueldoBase*1.1;
	}
	//Si es mayor a 15,000 se le da 6%
	else if(cantVendida>15000){
		return sueldoBase*1.06;
	}
	//Si es menor solo se le da el sueldo base
	else{
		return sueldoBase;
	}
}

//Muestra los datos del comisionista
void Comisionista::mostrar(){
	cout<<"Nomina: "<<nomina<<endl;
	cout<<"Nombre: "<<nombre<<" "<<apellidos<<endl;
	cout<<"Sueldo Base: $"<<sueldoBase<<endl;
	cout<<"Sueldo por comision: $"<<calcularPago()-sueldoBase<<endl;
	cout<<"Sueldo Total: $"<<calcularPago()<<endl;
}

#endif