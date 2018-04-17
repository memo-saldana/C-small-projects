#include <iostream>
#include <string>
using namespace std;
#include "Empleado.h"
#include "Comisionista.h"
#include "TiempoParcial.h"

int main(){
	Empleado *arr[4];
	string nombre, apellidos;
	int nomina, horasExtra;
	double sueldoBase,cantVendida;

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

		Comisionista *comTemp = new Comisionista(nombre,apellidos,nomina,sueldoBase,cantVendida);
		
		arr[i]=comTemp;
	}


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

		TiempoParcial *parTemp= new TiempoParcial(nombre,apellidos,nomina,sueldoBase,horasExtra);
		arr[i]=parTemp;
	}

	for(int i=0;i<4;i++){
		arr[i]->mostrar();
		cout<<endl;
	}
}