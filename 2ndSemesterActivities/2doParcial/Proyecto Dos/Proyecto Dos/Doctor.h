#ifndef Doctor_h
#define Doctor_h

class Doctor{
private:
	int idDoctor;
	string nombre,especialidad;

public:
	// Constructor default y con parametros
	Doctor();
	Doctor(int idDoctor, string nombre, string especialidad);

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
Doctor::Doctor(){

	idDoctor = 0;
	nombre = "";
	especialidad = "";


}
Doctor::Doctor(int idDoctor, string nombre, string especialidad){
	this->idDoctor = idDoctor;
	this->nombre = nombre;
	this->especialidad = especialidad;
}

// Metodos de acceso y modificacion.
int Doctor::getIdDoctor(){
	return idDoctor;
}
string Doctor::getNombre(){
	return nombre;
}
void Doctor::setIdDoctor(int idDoctor){
	this->idDoctor = idDoctor;
}
void Doctor::setNombre(string nombre){
	this->nombre = nombre;
}
void Doctor::setEspecialidad(string especialidad){
	this->especialidad = especialidad;
}


// Metodo para desplegar la informacion del objeto en pantalla.
void Doctor::muestra(){
	cout<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"ID: "<<idDoctor<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Especialidad: "<<especialidad<<endl;
	cout<<"----------------------------------------------"<<endl;

}

#endif /* Doctores_h */