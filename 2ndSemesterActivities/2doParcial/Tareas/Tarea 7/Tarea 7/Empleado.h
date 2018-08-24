#pragma once

class Empleado : public Persona {
private: 
	Tiempo horaEntrada, horaSalida;
	int depto;

public:
	Empleado();
	Empleado(Tiempo horaEntrada, Tiempo horaSalida);
	void setHoraEntrada(Tiempo horaEntrada);
	void setHoraSalida(Tiempo horaSalida);
	void setDepto(int depto);
	Tiempo getHoraEntrada();
	Tiempo getHoraSalida();
	int getDepto();
	void muestra();
};

Empleado::Empleado() : Persona(){
	horaEntrada = Tiempo();
	horaSalida = Tiempo();
}
Empleado::Empleado(Tiempo horaEntrada, Tiempo horaSalida) : Persona(){
	this->horaEntrada = horaEntrada;
	this->horaSalida = horaSalida;
	depto = 0;
}
void Empleado::setHoraEntrada(Tiempo horaEntrada){
	this->horaEntrada = horaEntrada;
}
void Empleado::setHoraSalida(Tiempo horaSalida){
	this->horaSalida = horaSalida;
}
void Empleado::setDepto(int depto){
	this ->depto = depto;
}
Tiempo Empleado::getHoraEntrada(){
	return horaEntrada;
}
Tiempo Empleado::getHoraSalida(){
	return horaSalida;
}
int Empleado::getDepto(){
	return depto;
}
void Empleado::muestra(){
	muestraPersona();
	cout<<"Hora de Entada:";
	horaEntrada.muestraHora();
	cout<<endl<<"Hora de Salida:";
	horaSalida.muestraHora();
	cout<<endl<<"Departamento: "<<depto<<endl;
}