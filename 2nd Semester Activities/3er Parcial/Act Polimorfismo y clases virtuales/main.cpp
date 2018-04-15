#include <iostream>
#include <string>
using namespace std;
#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Triangulo.h"

int main(){
	int i=0;
	double n,m;
	Figura *lista[6];
	
	for(;i<2;i++){
		
		cout<<"Dame la base del rectangulo "<<i+1<<endl;
		cin>>n;
		cout<<"Dame la altura del rectangulo "<<i+1<<endl;
		cin>>m;
		Rectangulo *rec=new Rectangulo(n,m);
		lista[i]=rec;
	}
	for(;i<4;i++){
		cout<<"Dame el radio del circulo "<<i+1<<endl;
		cin>>n;
		Circulo *cir=new Circulo(n);
		lista[i]=cir;
	}
	for(;i<6;i++){
		cout<<"Dame la base del triangulo "<<i+1<<endl;
		cin>>n;
		cout<<"Dame la altura del triangulo "<<i+1<<endl;
		cin>>m;
		Triangulo *tri=new Triangulo(n,m);
		lista[i]=tri;
	}

	for(int i=0; i<6;i++){
		lista[i]->muestraQueSoy();
		cout<<"Area: "<<lista[i]->calcArea()<<endl;
		cout<<"Perimetro: "<<lista[i]->calcPerimetro()<<endl<<endl;
	}

	return 0;
}