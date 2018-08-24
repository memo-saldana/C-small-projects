#ifndef Pilas_h_included
#define Pilas_h_included

template <class T>
class Pilas{
private:
	int tope;
	T arrDatos[15];

public:
	Pilas();
	void meter(T dato);
	void sacar();
	void observa();

};
template <class T>
Pilas<T>::Pilas(){
	tope = 0;
}

template <class T>
void Pilas<T>::meter(T dato){
	if(tope<15){
		arrDatos[tope] = dato;
		tope++;
	}
	else{
		cout<<"Pila llena."<<endl;
	}
}

template <class T>
void Pilas<T>::sacar(){
	if(tope>0){
		cout<<arrDatos[tope--]<<endl;
	}
	else{
		cout<<"Pila vacia."<<endl;
	}
}

template <class T>
void Pilas<T>::observa(){
	if(tope>0){
		cout<<arrDatos[tope]<<endl;
	}
	else{
		cout<<"Pila vacia."<<endl;
	}
	
}

#endif 