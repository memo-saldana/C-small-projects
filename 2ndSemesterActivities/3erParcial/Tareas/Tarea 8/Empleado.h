#ifndef Empleado_h_included
#define Empleado_h_included

//Se declara clase abstracta Empleado
class Empleado{
protected:
	//Atributos que utilizaran por clases hijas
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
//Default, no recibe datos
Empleado::Empleado(){
	nombre="";
	apellidos="";
	nomina=0;
	sueldoBase=0;
}
//Por parametros, recibe datos para cada atributo
Empleado::Empleado(string nombre, string apellidos, int nomina, double sueldoBase){
	this->nombre=nombre;
	this->apellidos=apellidos;
	this->nomina=nomina;
	this->nomina=nomina;
	this->sueldoBase=sueldoBase;
}

//Metodos Acceso

//getNombre regresa el string que contiene el nombre del Empleado
string Empleado::getNombre(){
	return nombre;
}

//getApellidos regresa el string que contiene los apellidos del Empleado
string Empleado::getApellidos(){
	return apellidos;
}

//getNomina regresa el entero que contiene la nomina del Empleado
int Empleado::getNomina(){
	return nomina;
}

//getSueldoBase regresa el numero con decimal que contiene el sueldo base del Empleado
double Empleado::getSueldoBase(){
	return sueldoBase;
}

//Metodos de Modificacion

//setNombre modifica el nombre a uno dado
void Empleado::setNombre(string nombre){
	this->nombre = nombre;
}

//setApellidos modifica los apellidos a unos dados
void Empleado::setApellidos(string apellidos){
	this->apellidos = apellidos;
}

//setNomina modifica la nomina a una dada
void Empleado::setNomina(int nomina){
	this->nomina = nomina;
}

//setSueldoBase modifica el sueldo base a uno dado
void Empleado::setSueldoBase(double sueldoBase){
	this->sueldoBase = sueldoBase;
}

#endif