/*

Las clases Doctor, Pacientes y Fecha deben tener un constructor default, un constructor con todos los parámetros, métodos de acceso y modificación para todos sus 
atributos y un método muestra.
El atributo listaPx de la clase Cirugías es un arreglo de 10 elementos, en este arreglo se almacena el id de cada uno de los pacientes que tendrán ese tipo cirugia.
El atributo cantPx de la clase Cirugías es para almacenar la cantidad de pacientes que requieren esa cirugia, es decir, la cantidad de datos que hay en el arreglo 
listaPx.
La clase Cirugías debe tener:
Constructor default que inicialice la Cirugía con la lista de pacientes vacía y valores default para los demás atributos.
de acceso y modificación para los atributos de: idDoctor, idCirugía, descripcion, fechaCx, duración.
o	Método de acceso para el atributo listaPx, debe recibir como parámetro un índice de cuál paciente (cuál subíndice del arreglo) se quiere accesar.
o	Debe haber un método para agregar un paciente a la lista de pacientes, éste método debe recibir como parámetro el id del paciente que se va a agregar a una 
cirugía y el método debe agregarlo al arreglo listaPx y ajustar el atributo cantPx. Es necesario que este método tenga como valor de retorno un valor booleano que 
indique si se pudo agregar o no el paciente a la cirugía, no se podrá agregar si el paciente se duplica o si el arreglo de pacientes ya está lleno. Una vez que se 
ejecuta este método, debe enviarse un mensaje indicando si se pudo realizar la alta del paciente o si ya no hay espacio.
o	El atributo cantPx debe tener solamente método de acceso, porque no es posible modificar la cantidad de pacientes directamente.
Descripción del Proyecto
1.	Escribe ahora un programa que tenga arreglos de objetos de tipo Doctor (con un máximo de 5 doctores), Pacientes (con un máximo de 15 pacientes) y Cirugias (con 
un máximo de 10 cirugias).
2.	Carga los datos para el arreglo de Doctor de un archivo de texto que contiene en cada renglón idDoctor, nombre y especialidad (hay un archivo de ejemplo 
disponible en Blackboard, con Formato: Numero Nombre Especialidad).
3.	Carga los datos para el arreglo de Pacientes de un archivo de texto que contiene en cada renglón idPx, nombre genero y edad (hay un archivo de ejemplo disponible
en Blackboard, con Formato : Numero Nombre Genero Edad)
4.	Pide al usuario que teclee los datos para cada uno de los cirugias a realizar, en este momento se dará de alta las cirugias sin pacientes, por lo que la 
cantidad de pacientes (cantPx) será 0.
5.	Tu programa deberá tener un menú con las siguientes opciones:
a.	Consulta de todos las cirugias a realizar, debe mostrar todos los datos generales (sin pacientes) de todos las cirugias que se han registrado.
Dar de alta un paciente para una cirugia, al hacerlo deberás de validar qu el id del paciente (idPx) y el id de la cirugia (idCirugia) existan y mandar un mensaje de
alta exitosa o en caso de que alguno de los dos no existan (paciente y/o cirugia) debe de enviar un mensaje, indicándolo. 
Consulta de cirugia por fecha, deberás pedir al usuario la fecha (dia, mes, año), validar que sea válida (dia entre 1 y 28 o 30 o 31, mes entre 1 y 12) y mostrar los
 datos generales (sin pacientes) de todos las cirugias que existen con esa fecha, o un mensaje inidicando que no existen cirugias con dicha fecha.
dConsulta por id de la cirugia, debes validar que el id de la cirugia exista, y en caso afimativo, mostrar en la pantalla los datos generales de la cirugia, así como
los nombres de los pacientes que esten dados de alta. En caso de no existir el id de la cirugia, o que no tenga pacientes dados de alta mandar un mensaje indicando 
lo que sucede.
eConsulta de cirugias de una doctor, debes pedir el idDoctor, validarla y mostrar en la pantalla los datos generales (sin pacientes) de todos las cirugias de dicha 
doctor. En caso de no existir el doctor o existir pero no tener cirugias, indicarlo con un mensaje según corresponda.
fConsulta la lista de cirugias que se le han practicado a un paciente, debes pedir la id del paciente y mostrar en la pantalla los datos generales de todos las 
cirugias que se le han realizado a dicho paciente. Muestra los mensajes correspondientes en caso de que el paciente no exista, o en caso de que exista pero no tenga 
cirugias.
gTerminar.


*/

#ifndef Doctores_h
#define Doctores_h

class Doctores{


private:
	int idDoctor;
	string nombre,especialidad;

public:
	Doctores();
	Doctores(int idDoctor, string nombre, string especialidad);

	int getIdDoctor();
	string getNombre();
	string getEspecialidad();
	
	
	void setIdDoctor(int idDoctor);
	void setNombre(string nombre);
	void setEspecialidad(string especialidad);


	void muestra();
};

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


void Doctores::muestra(){
	cout<<endl;
	cout<"----------------------------------------------"<<endl;
	cout<<"ID: "<<idDoctor<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Especialidad: "<<especialidad<<endl;
	cout<"----------------------------------------------"<<endl;

}


#endif /* Doctores_h */


