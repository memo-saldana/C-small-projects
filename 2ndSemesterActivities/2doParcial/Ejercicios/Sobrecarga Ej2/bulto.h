#ifndef BULTO_H_INCLUDED
#define BULTO_H_INCLUDED
#include <math.h>
// Nombre: Clase Bulto
//Descipción: clase que contiene los atributos kilos y gramos, que representan el peso de un bulto
//Autor: Maestras
//Fecha: 5 octubre
class Bulto
{
    private:
		int kilos;
		int gramos;
	public:
	    //Constructores
	    Bulto();
		Bulto(int k);
		Bulto(int k, int g);
		//Métodos de acceso
		void setKilo(int k);
		void setGramo(int g);
		//Métodos de modificación
		int getKilo();
		int getGramo();
		//Métodos de operación
		void muestra();
		void operator++(int);  // incrementa un gramo al bulto
		friend void operator--(Bulto &b,int);  // decrementa un gramo al bulto
		Bulto operator+(int m);  // suma la cantidad de gramos recibidos en m a bulto y regresa el bulto modificado
		friend Bulto operator+(Bulto b1, Bulto b2);  // suma dos bultos y regresa un nuevo Bulto
		Bulto operator-(int m);  // a un Bulto le resta una cantidad de gramos y regresa el  Bulto modificado
		friend Bulto operator-(Bulto b1, Bulto b2); // a un Bulto le resta otro Bulto y regresa el nuevo Bulto
		bool operator>(Bulto b);  // regresa true/false si el primer Bulto es > que el segundo
		bool operator<(Bulto b); // regresa true/false si el primer Bulto es < que el segundo
		bool operator==(Bulto b); // regresa true/false si ambos Bultos son iguales

};
//Constructores
Bulto::Bulto()
{
 kilos=0;
 gramos=0;
}
Bulto::Bulto(int k){
	kilos = k;
	gramos = 0;
}
Bulto::Bulto(int k, int g){
	kilos = k;
	gramos = g;
}
//Métodos de modificación
void Bulto::setKilo(int k)
{
    kilos=k;
}
void Bulto::setGramo(int g)
{
    gramos=g;
}
//Métodos de acceso
int Bulto::getKilo()
{
    return kilos;
}
int Bulto::getGramo()
{
    return gramos;
}
//Métodos de operación
void Bulto::muestra()
{
    cout<<kilos<<" kg con "<<gramos<< " gramos"<<endl;
}
//////////////////////////////////////////
//COMPLETA EL CÓDIGO QUE FALTA
//////////////////////////////////////////
// incrementa un gramo al bulto opcion uno
void Bulto::operator++(int){ // incrementa un gramo al bulto

	this->gramos++;
	if(this->gramos>999){

		this->kilos++;
		this->gramos-=1000;
	}

}  
// decrementa un gramo al bulto opcion 2
void operator--(Bulto &b,int){  

	b.gramos--;
	if(b.gramos<0){

		b.kilos--;
		b.gramos+=1000;
	}

}


// suma la cantidad de gramos recibidos en m al bulto y regresa el bulto modificado opcion 3
Bulto Bulto::operator+(int m){  
	Bulto res;
	res.gramos=this->gramos + m;
	res.kilos=this->kilos;

	while(res.gramos>999){
		res.kilos++;
		res.gramos-=1000;
	}

	return res;

}
// suma dos bultos y regresa un nuevo Bulto opcion 4
Bulto operator+(Bulto b1, Bulto b2){  

	Bulto res;
	res.gramos= b1.gramos + b2.gramos;

	while(res.gramos>999){
		res.kilos++;
		res.gramos-=1000;

	}
	res.kilos+= b1.kilos + b2.kilos;

	return res;


}

// a un Bulto le resta una cantidad de gramos y regresa el  Bulto modificado opcion 5
Bulto Bulto::operator-(int m){  
		Bulto res;

		res.gramos= this->gramos - m;
		res.kilos= this->kilos;
		while(res.gramos<0){
			res.kilos--;
			res.gramos+=1000;
		}

		return res;

}

// resta dos Bultos y regresa el nuevo Bulto opcion 6
Bulto operator-(Bulto b1, Bulto b2){ 

	Bulto res;

	res.gramos = b1.gramos - b2.gramos;
	res.kilos = b1.kilos - b2.kilos;

	while(res.gramos <0){

		res.kilos--;
		res.gramos+=1000;


	}

	return res;

}

// regresa true/false si el primer Bulto es > que el segundo opcion 7
bool Bulto::operator>(Bulto b){ 

	if(this->kilos >b.kilos){
		return true;
	}
	else if(this->kilos==b.kilos && this->gramos >b.gramos){
		return true;
	}
	else{
		return false;
	}
} 

// regresa true/false si el primer Bulto es < que el segundo opcion 8
bool Bulto::operator<(Bulto b){
		if(this->kilos <b.kilos){
		return true;
	}
	else if(this->kilos==b.kilos && this->gramos <b.gramos){
		return true;
	}
	else{
		return false;
	}

}
// regresa true/false si ambos Bultos son iguales opcion 9
bool Bulto::operator==(Bulto b){
	if(this->kilos == b.kilos && this->gramos == b.gramos){
		return true;
	}
	else{
		return false;
	}

}

#endif // BULTO_H_INCLUDED