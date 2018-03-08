#ifndef TIEMPO_H_INCLUDED
#define TIEMPO_H_INCLUDED

class Tiempo {

private:
	//Atributos
	int hora,minuto,segundo;

public:
	Tiempo();
	Tiempo(int hora, int minuto, int segundo);
	void muestra();
	//Sobrecarga de + como friend para sumar 2 tiempos
	friend Tiempo operator + (Tiempo a, Tiempo b);

	//Sobrecarga de + como metodo para sumarle segundos a un tiempo
	Tiempo operator + (int segundo);

	//Sobrecarga de ! como friend para dar el tiempo equivalente en segundos en una variable tipo entero
	friend int operator !(Tiempo a);

	//Sobrecarga de > como friend para comparar dos tiempos y regresar un verdadero o falso
	friend bool operator >(Tiempo a, Tiempo b);

	//Sobrecarga de - como friend para restar segundos a un tiempo
	friend Tiempo operator -(Tiempo a, int segundo);

}

Tiempo::Tiempo(){

	hora=0;
	minuto=0;
	segundo=0;
}

Tiempo::Tiempo(int hora, int minuto, int segundo){

	while(segundo>59){
		mintuo++;
		segundo-=60;
	}
	this->segundo=segundo;
	
	while(minuto>59){
		hora++;
		minuto-=60;
	}
	this->minuto=minuto;
	
	this->hora=hora;
}

void Tiempo::muestra(){

	cout << hh << ":";
	if (mm < 10)
	cout << "0";
	cout << mm << ":";
	if (ss < 10)
	cout << "0";
	cout << ss << endl;
}

Tiempo operator+ (Tiempo a, Tiempo b){

	Tiempo res;
	res.segundo=a.segundo + b.segundo;
	while(res.segundo>59){

		res.segundo-=60;
		res.minuto++;
	}
	res.minuto+=a.minuto + b.minuto;
	while(res.minuto>59){

		res.minuto-=60;
		res.hora++;
	}

	res.hora+= a.hora + b.hora;

	return res;
}

Tiempo Tiempo::operator + (int segundo){
	Tiempo res;
	res.segundo= this-> segundo +segundo;

	while(res.segundo>59){

		res.minuto++;
		res.segundo-=60;
	}

	res.minuto+= this->minuto;
	while(res.minuto>59){

		res.hora++;
		res.minuto-=60;
	}

	res.hora+= this->hora;

	return res;

}

int operator !(Tiempo a){
	
	return (3600*a.hora)+(60*a.minuto)+a.segundo;

}

bool operator >(Tiempo a, Tiempo b){
	if(a.hora>b.hora){
		return true;
	}
	else if(a.hora==b.hora && a.minuto > b.minuto){
		return true;
	}
	else if(a.hora==b.hora && a.minuto == b.minuto && a.segundo>b.segundo){
		return true;
	}
	else{
		return false;
	}

}

Tiempo operator -(Tiempo a, int segundo){

	Tiempo res;
	res=a;

	while(segundo>59){
		segundo-=60;
		res.minuto--;
	}
	res.segundo-= 
}
