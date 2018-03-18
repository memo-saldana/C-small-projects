#include <iostream>
#include <string>
using namespace std;
#include "Persona.h"
#include "Tiempo.h"
#include "Empleado.h"

int main(){
	Empleado emp[10];
	char op;
	int cant = 0, id, hora, min, seg, depto, num;
	bool dup, existe;
	string nombre;

	do{
		cout<<endl<<endl<<"Eliga una opcion del menu."<<endl;
		cout<<"a. Alta de empleado."<<endl;
		cout<<"b. Llegada tarde."<<endl;
		cout<<"c. Cantidad de empleados en un departamento."<<endl;
		cout<<"d. Buscar empleado."<<endl;
		cout<<"e. Salir."<<endl;
		cin>>op;

		switch(toupper(op)){
			case 'A':
				if(cant<10){
					dup = false;
					cout<<"Teclea el ID del empleado."<<endl;
					cin>>id;
					emp[cant].setIdentidad(id);

					for(int i = 0; i<cant; i++){
						if(id == emp[i].getIdentidad()){
							dup = true;
						}
					}
					if(dup){
						cout<<"El ID ya existe."<<endl;
						break;
					}

					cout<<"Teclea el nombre del empleado "<<id<<endl;
					cin.ignore();
					getline(cin, nombre);
					emp[cant].setNombre(nombre);

					cout<<"Teclea la hora de entrada del empleado "<<id<<" separando la hora, minuto, y segundo por espacios."<<endl;
					cin>>hora>>min>>seg;
					Tiempo tmp1(hora,min,seg);
					emp[cant].setHoraEntrada(tmp1);
					
					cout<<"Teclea la hora de salida del empleado "<<id<<" separando la hora, minuto, y segundo por espacios."<<endl;
					cin>>hora>>min>>seg;
					Tiempo tmp2(hora,min,seg);
					emp[cant].setHoraSalida(tmp2);

					cout<<"Tecela el numero del departamento del empleado."<<endl;
					cin>>depto;
					emp[cant].setDepto(depto);


					cout<<endl<<"Alta de empleado exitosa!"<<endl;
					cant++;
				}
				else{
					cout<<"Error, ya no hay espacio dar de alta mas empleados."<<endl;

				}
				break;
			
			case 'B':
				if(cant>0){

					cout<<"Teclea la hora, minuto y segundo de entrada, en ese orden y separados por espacios."<<endl;
					cin>>hora>>min>>seg;
					Tiempo temp(hora,min,seg);
					cout<<endl<<"Los empleados que llegaron tarde: "<<endl;
					for(int i=0; i<cant;i++){

						if(temp < emp[i].getHoraEntrada()){
							emp[i].muestra();
						}
					}
				}
				else{
					cout<<"Se debe dar de alta un empleado primero."<<endl;
				}
				break;
				

			case 'C':
				if(cant>0){

					cout<<"Tecea el departamento que se quiere buscar"<<endl;
					cin>>depto;
					
					num=0;
					for(int i=0; i<cant; i++){
						if(depto == emp[i].getDepto()){
							num++;
						}
					}
					cout<<"Empleados en el departamento "<<depto<<": "<<num<<endl;
				}
				else{
					cout<<"Se debe dar de alta un empleado primero."<<endl;
				}
				break;

			case 'D':
				if(cant>0){
					cout<<"Teclea la identidad del empleado."<<endl;
					cin>>id;
					existe = false;
					cout<<endl<<"Empleado: "<<endl;
					for(int i=0; i<cant; i++){
						if(id == emp[i].getIdentidad()){
							emp[i].muestra();
							existe = true;
						}
					}
					if(!existe){
						cout<<"No se encontro empleado con ese ID."<<endl;
					}
				}
				else{
					cout<<"Se debe dar de alta un empleado primero."<<endl;
				}
				break;

			case 'E':
				break;

			default:
				cout<<"Opcion invalida, intenta nuevamente."<<endl;

		}

	}while(toupper(op)!='E');
}