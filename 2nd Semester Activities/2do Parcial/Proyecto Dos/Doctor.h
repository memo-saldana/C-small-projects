#ifndef Doctores_h
#define Doctores_h

class Doctores{
private:
	int idDoctor;
	string nombre,especialidad;

public:
	// Constructor default y con parametros
	Doctores();
	Doctores(int idDoctor, string nombre, string especialidad);

	// Metodos de acceso y modificacion
	int getIdDoctor();
	string getNombre();
	string getEspecialidad();
	void setIdDoctor(int idDoctor);
	void setNombre(string nombre);
	void setEspecialidad(string especialidad);

	// Metodo muestra
	void muestra();
};

// Constructor default y por parametos
Doctores::Doctores(){

	idDoctor = 0;
	nombre = "";
	especialidad = "";


}
Doctores::Doctores(int idDoctor, string nombre, string especialidad){
	this->idDoctor = idDoctor;
	this->nombre = nombre;
	this->especialidad = especialidad;
}

// Metodos de acceso y modificacion.
int Doctores::getIdDoctor(){
	return idDoctor;
}
string Doctores::getNombre(){
	return nombre;
}
void Doctores::setIdDoctor(int idDoctor){
	this->idDoctor = idDoctor;
}
void Doctores::setNombre(string nombre){
	this->nombre = nombre;
}
void Doctores::setEspecialidad(string especialidad){
	this->especialidad = especialidad;
}
void Doctores::setEdad(int edad){
	this->edad = edad;
}

// Metodo para desplegar la informacion del objeto en pantalla.
void Doctores::muestra(){
	cout<<endl;
	cout<"----------------------------------------------"<<endl;
	cout<<"ID: "<<idDoctor<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Especialidad: "<<especialidad<<endl;
	cout<"----------------------------------------------"<<endl;

}


#endif /* Doctores_h */