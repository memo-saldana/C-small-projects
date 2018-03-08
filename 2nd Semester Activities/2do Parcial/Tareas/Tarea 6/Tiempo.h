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
	friend Tiempo operator + (Tiempo a, Tiempo b);
	Tiempo operator + (int segundo);




}

Tiempo::Tiempo(){

	hora=0;
	minuto=0;
	segundo=0;
}

Tiempo::Tiempo(int hora, int minuto, int segundo){

	this->hora=hora;
	this->minuto=minuto;
	this->segundo=segundo;
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
	res.segundo = this->segundo + segundo;
	while(res.segundo>59){

		res.segundo-=60;
		res.minuto++;
	}

}

