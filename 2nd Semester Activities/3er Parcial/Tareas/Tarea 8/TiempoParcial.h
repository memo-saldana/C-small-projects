#pragma once

class TiempoParcial:public Empleado{
private:
	int horasExtra;

public:
	//Constructores
	TiempoParcial();
	TiempoParcial(string, string, int, double, int);

	//Acceso
	int getHorasExtra();

	//Modificacion
	void setHorasExtra(int);

	double caclularPago();
	void mostrar();
};

//Constructores
TiempoParcial::TiempoParcial():Empleado(){
	horasExtra=0;
}
TiempoParcial::TiempoParcial(string nombre, string apellidos, int nomina, double sueldoBase, int horasExtra):Empleado(nombre, apellidos, nomina, sueldoBase){
	this->horasExtra = horasExtra;
}

//Acceso
int TiempoParcial::getHorasExtra(){
	return horasExtra;
}

//Modificacion
void TiempoParcial::setHorasExtra(int){
	this->horasExtra = horasExtra;
}

double TiempoParcial::caclularPago(){
		return sueldoBase+horasExtra*250;
}
void TiempoParcial::mostrar(){
	cout<<"Nomina: "<<nomina<<endl;
	cout<<"Nombre: "<<nombre<<" "<<apellidos<<endl;
	cout<<"Saldo Base: $"<<sueldoBase<<endl;
	cout<<"Horas extra trabajadas: "<<horasExtra<<endl;
	cout<<"Monto por horas extra: $"<<caclularPago() - sueldoBase<<endl;
	cout<<"Sueldo Total: "<<caclularPago()<<endl;
}