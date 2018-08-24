/*
Descripion: Tarea de sobrecarga de operadores
Nombre: Jose Guillermo Salda;a Cardenas A01039888
Fecha: A01039888
*/
#ifndef TIEMPO_H_INCLUDED
#define TIEMPO_H_INCLUDED

class Tiempo{

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

	//Sobrecarga de += como miembro para sumarle un tiempo a otro
	Tiempo operator +=(Tiempo b);

	//Sobrecarga de < como miembro para ver si u tiempo es menor que otro
	bool operator < (Tiempo b); 

	//Sobrecarga de ++ como miembro para sumar un segundo a un tiempo 
	Tiempo operator ++();
};

Tiempo::Tiempo(){

	//Inicializacion con valores de 0;
	hora=0;
	minuto=0;
	segundo=0;
}

Tiempo::Tiempo(int hora, int minuto, int segundo){

	//Inicializacion con parametros dados
	this->segundo=segundo;
	
	this->minuto=minuto;
	
	this->hora=hora;

	//Valida que solo haya de 0 a 59 segundos y minutos
	while(this->segundo>59){
		this->minuto++;
		this->segundo-=60;
	}
	while(this->minuto>59){
		this->hora++;
		this->minuto-=60;
	}
}

void Tiempo::muestra(){

	cout << hora << ":";
	if (minuto < 10)
	cout << "0";
	cout << minuto << ":";
	if (segundo < 10)
	cout << "0";
	cout << segundo << endl;
}

Tiempo operator+ (Tiempo a, Tiempo b){

	//Se crea objeto a donde se guarda la suma
	Tiempo res;
	res.segundo=a.segundo + b.segundo;
	res.hora= a.hora + b.hora;
	res.minuto=a.minuto + b.minuto;

	//Valida que solo haya de 0 a 59 segundos y minutos
	while(res.segundo>59){

		res.segundo-=60;
		res.minuto++;
	}
	
	while(res.minuto>59){

		res.minuto-=60;
		res.hora++;
	}

	return res;
}

Tiempo Tiempo::operator + (int segundo){


	//Se crea objeto con valores del tiempo dado, sumandole los segundos a la variable respectiva
	Tiempo res;
	res.segundo = this-> segundo + segundo;
	res.minuto = this->minuto;
	res.hora = this->hora;

	//Valida que solo haya de 0 a  59 segundos y minutos
	while(res.segundo>59){

		res.minuto++;
		res.segundo-=60;
	}
	while(res.minuto>59){

		res.hora++;
		res.minuto-=60;
	}

	return res;

}

int operator !(Tiempo a){
	
	//Regresa el valor en segundos
	return (3600*a.hora)+(60*a.minuto)+a.segundo;

}

bool operator >(Tiempo a, Tiempo b){
	//Crea dos variables enteras donde se guarda el tiempo equivalente en segundos
	int uno, dos;
	uno = (3600*a.hora)+(60*a.minuto)+a.segundo;
	dos = (3600*b.hora)+(60*b.minuto)+b.segundo;
	
	//Verifica que tiempo es mayor, comparando los segundos de cada uno
	if(uno > dos){

		return true;

	}
	else{

		return false;
	}
}

Tiempo operator -(Tiempo a, int segundo){

	//Se crea un objeto que se le asignan los valores originales del tiempo y se le restan
	// los segundos dados
	Tiempo res;
	res=a;
	res.segundo= res.segundo -segundo;

	//Se valida que solo haya de 0 a 59 minutos y segundos
	while(res.segundo<0){

		res.segundo+=60;
		res.minuto--;
	}
	while(res.minuto<0){
		res.hora--;
		res.minuto+=60;
	}
	
	return res;
}


Tiempo Tiempo::operator +=(Tiempo b){
	//Se le suma cada variable del tiempo b al tiempo que ya se tiene
	hora += b.hora;
	minuto += b.minuto;
	segundo += b.segundo;

	//Validando que solo haya entre 0 y 59 segundos y minutos
	while(segundo>59){
		minuto++;
		segundo-=60;
	}

	while(minuto>59){
		hora++;
		minuto-=60;
	}

	//Se regresa este objeto al que se modificó
	return *this;
}

bool Tiempo::operator< (Tiempo b){

	int uno, dos;
	uno = (3600*hora)+(60*minuto)+segundo;
	dos = (3600*b.hora)+(60*b.minuto)+b.segundo;

	if(uno < dos){

		return true;

	}
	else{

		return false;
	}

}

Tiempo Tiempo::operator ++(){

	//Se suma 1 segundo al atributo segundo
	segundo++;

	//Como solo se suma 1, solo se debe checar una vez si sobrepasa 59 segundos o minutos
	if(segundo>59){
		minuto++;
		segundo-=60;
	}
	if(minuto>59){
		hora++;
		minuto-=60;
	}

	//se regresa este mismo objeto
	return *this;
}



#endif // TIEMPO_H_INCLUDED
