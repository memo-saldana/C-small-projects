#ifndef Empleado_h_included
#define Empleado_h_included

class Empleado{
protected:
	string nombre, apellidos;
	int nomina;
	double sueldoBase;

public:
	//Constructores
	Empleado();
	Empleado(string, string, int, double);

	//Metodos Acceso
	string getNombre();
	string getApellidos();
	int getNomina();
	double getSueldoBase();

	//Metodos de Modificacion
	void setNombre(string);
	void setApellidos(string);
	void setNomina(int );
	void setSueldoBase(double);	
	
	//Metodos virtuales puros
	virtual double calcularPago() = 0;
	virtual void mostrar() = 0;
};

//Constructores
Empleado::Empleado(){
	nombre="";
	apellidos="";
	nomina=0;
	sueldoBase=0;
}
Empleado::Empleado(string nombre, string apellidos, int nomina, double sueldoBase){
	this->nombre=nombre;
	this->apellidos=apellidos;
	this->nomina=nomina;
	this->nomina=nomina;
	this->sueldoBase=sueldoBase;
}

//Metodos Acceso
string Empleado::getNombre(){
	return nombre;
}
string Empleado::getApellidos(){
	return apellidos;
}
int Empleado::getNomina(){
	return nomina;
}

double Empleado::getSueldoBase(){
	return sueldoBase;
}

//Metodos de Modificacion
void Empleado::setNombre(string nombre){
	this->nombre = nombre;
}
void Empleado::setApellidos(string apellidos){
	this->apellidos = apellidos;
}
void Empleado::setNomina(int nomina){
	this->nomina = nomina;
}
void Empleado::setSueldoBase(double sueldoBase){
	this->sueldoBase = sueldoBase;
}

#endif