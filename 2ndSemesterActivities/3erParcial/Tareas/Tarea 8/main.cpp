/*
Descripción: Este programa es sobre polimorfismo, guarda la informacion de diferentes tipos de empleados
en un arreglo de tipo Empleado y su informacion dependiendo del objeto que tenga en cada lugar del arreglo.
Nombre: José Guillermo Saldaña A01039888
Fecha: 16 abril 2018
*/
#include <iostream>
#include <string>
using namespace std;
//Incluir todas las clases
#include "Empleado.h"
#include "TiempoParcial.h"
#include "Comisionista.h"


int main(){

	//Declaracion de apuntador de arreglo de Empleado y variables necesarias
	Empleado *arr[4];
	string nombre, apellidos;
	int nomina, horasExtra;
	double sueldoBase,cantVendida;

	//Loop para ingresar datos de los dos Comisionistas
	for(int i=0;i<2;i++){
		cout<<"Teclea el nombre del Comisionista "<< i+1<<endl;
		cin>>nombre;

		cout<<"Teclea los apellidos del Comisionista "<<i+1<<endl;
		cin.ignore();
		getline(cin, apellidos);

		cout<<"Teclea la nomina del Comisionista "<<i+1<<endl;
		cin>>nomina;

		cout<<"Teclea el saldo base del Comisionista "<<i+1<<endl;
		cin>>sueldoBase;

		cout<<"Teclea la catidad vendida por el Comisionista "<<i+1<<endl;
		cin>>cantVendida;

		//Se crean apuntadores de tipo Comisionista para luego hacer que el apuntador de arreglo de Empleados
		// apunte a cada Comisionista
		Comisionista *comTemp = new Comisionista(nombre,apellidos,nomina,sueldoBase,cantVendida);
		arr[i]=comTemp;
	}

	//Loop para ingresar datos de los dos Tiempo Parcial
	for(int i=2;i<4;i++){
		cout<<"Teclea el nombre del empleado de Tiempo Parcial "<< i+1<<endl;
		cin>>nombre;

		cout<<"Teclea los apellidos del empleado de Tiempo Parcial "<<i+1<<endl;
		cin.ignore();
		getline(cin, apellidos);

		cout<<"Teclea la nomina del empleado de Tiempo Parcial "<<i+1<<endl;
		cin>>nomina;

		cout<<"Teclea el saldo base del empleado de Tiempo Parcial "<<i+1<<endl;
		cin>>sueldoBase;

		cout<<"Teclea las horas extra del empleado de Tiempo Parcial "<<i+1<<endl;
		cin>>horasExtra;

		TiempoParcial *parTemp = new TiempoParcial( nombre, apellidos, nomina, sueldoBase, horasExtra);
		arr[i]=parTemp;
	}

	//Muestra los 4 empleados, con su respectivo método muestra
	for(int i=0;i<4;i++){
		arr[i]->mostrar();
		cout<<endl;
	}
}