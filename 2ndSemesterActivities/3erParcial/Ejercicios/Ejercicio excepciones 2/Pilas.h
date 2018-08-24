#ifndef Pilas_h_included
#define Pilas_h_included


class Pilas{
private:
	int tope;
	int arrDatos[15];

public:
	class errorPilas{
	public:
		string observa;
		errorPilas(string observa){
			this->observa=observa;
		}
	};
	Pilas();
	void meter(int dato);
	void sacar();
	void observa();

};

Pilas::Pilas(){
	tope = 0;
}


void Pilas::meter(int dato){
	if(tope<15){
		arrDatos[tope] = dato;
		tope++;
	}
	else{
		throw errorPilas("meter");
	}
}


void Pilas::sacar(){
	if(tope>0){
		cout<<arrDatos[tope--]<<endl;
	}
	else{
		throw errorPilas("sacar");
	}
}


void Pilas::observa(){
	if(tope>0){
		cout<<arrDatos[tope]<<endl;
	}
	else{
		throw errorPilas("observar");
	}
	
}

#endif 