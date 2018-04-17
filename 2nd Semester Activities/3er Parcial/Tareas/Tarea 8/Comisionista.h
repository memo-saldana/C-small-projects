#pragma once

class Comisionista: public Empleado{
private:
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
Comisionista::Comisionista():Empleado(){
	cantVendida = 0;
}
Comisionista::Comisionista(string nombre,string apellidos,int nomina, double saldoBase, double cantVendida) : Empleado(nombre,apellidos,nomina,saldoBase){
	this->cantVendida = cantVendida;
}

//Metodos de Acceso
double Comisionista::getCantVendida(){
	return cantVendida;
}

//Metodos de Modificación
void Comisionista::setCantVendida(double cantVendida){
	this->cantVendida = cantVendida;
}

//Metodos funcionales
double Comisionista::calcularPago(){
	if(cantVendida>35000){
		return sueldoBase*1.1;
	}
	else if(cantVendida>15000){
		return sueldoBase*1.06;
	}
	else{
		return sueldoBase;
	}
}
void Comisionista::mostrar(){
	cout<<"Nomina: "<<nomina<<endl;
	cout<<"Nombre: "<<nombre<<" "<<apellidos<<endl;
	cout<<"Sueldo Base: $"<<sueldoBase<<endl;
	cout<<"Sueldo por comision: $"<<calcularPago()-sueldoBase<<endl;
	cout<<"Sueldo Total: $"<<calcularPago()<<endl;
}
