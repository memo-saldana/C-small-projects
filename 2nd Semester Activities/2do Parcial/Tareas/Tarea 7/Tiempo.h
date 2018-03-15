#pragma once

class Tiempo{

private:
	int hora, min, seg;

public:
	Tiempo();
	Tiempo(int hora, int min, int seg);
	void setHora(int hora);
	void setMin(int min);
	void setSeg(int seg);
	int getHora();
	int getMin();
	int getSeg();
	void muestraHora();

	bool operator < (Tiempo b); 

};


Tiempo::Tiempo(){
	hora = 0;
	min = 0;
	seg = 0;
}
Tiempo::Tiempo(int hora, int min, int seg){
	this->hora = hora;
	this->min = min;
	this->seg = seg;
}
void Tiempo::setHora(int hora){
	this-> hora = hora;
}
void Tiempo::setMin(int min){
	this-> min = min;
}
void Tiempo::setSeg(int seg){
	this-> seg = seg;
}
int Tiempo::getHora(){
	return hora;
}
int Tiempo::getMin(){
	return min;
}
int Tiempo::getSeg(){
	return seg;
}
void Tiempo::muestraHora(){
	cout<<hora<<":";
	if(min<10){
		cout<<"0";
	}
	cout<<min<<":";

	if(seg<10){
		cout<<"0";
	}
	cout<<seg;
}

bool Tiempo::operator< (Tiempo b){

	int uno, dos;
	uno = (3600*hora)+(60*min)+seg;
	dos = (3600*b.hora)+(60*b.min)+b.seg;

	if(uno < dos){

		return true;

	}
	else{

		return false;
	}

}