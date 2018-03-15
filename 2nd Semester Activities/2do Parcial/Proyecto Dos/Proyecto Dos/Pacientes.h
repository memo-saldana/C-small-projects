#ifndef Pacientes_h
#define Pacientes_h

class Pacientes{
private:
	int idPx,edad;
	string nombre,genero;

public:
	// Constructores.
	Pacientes();
	Pacientes(int idPx, string nombre, string genero, int edad);

	// Metodos de acceso y modificacion.
	int getIdPx();
	string getNombre();
	string getGenero();
	int getEdad();
	void setIdPx(int idPx);
	void setNombre(string nombre);
	void setGenero(string genero);
	void setEdad(int edad);

	// Metodo para mostrar los datos.
	void muestra();
};

// Constructor default y con parámetros.
Pacientes::Pacientes(){
	idPx = 0;
	nombre = "";
	genero = "";
	edad = 0;

}

Pacientes::Pacientes(int idPx, string nombre, string genero, int edad){
	this->idPx = idPx;
	this->nombre = nombre;
	this->genero = genero;
	this->edad = edad;
}

// Metodos de acceso y modificacion.
int Pacientes::getIdPx(){
	return idPx;
}
string Pacientes::getNombre(){
	return nombre;
}

int Pacientes::getEdad(){
	return edad;
}

void Pacientes::setIdPx(int idPx){
	this->idPx = idPx;
}
void Pacientes::setNombre(string nombre){
	this->nombre = nombre;
}
void Pacientes::setGenero(string genero){
	this->genero = genero;
}
void Pacientes::setEdad(int edad){
	this->edad = edad;
}

// Metodos muestra para enseñar datos en pantalla.
void Pacientes::muestra(){
	cout<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"ID: "<<idPx<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Genero: "<<genero<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"----------------------------------------------"<<endl;

}

#endif /* Pacientes_h */
