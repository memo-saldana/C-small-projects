#include <iostream>
#include <string>
using namespace std;
#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Triangulo.h"

int main(){
	int n,i=0;
	Figura lista[6];
	Rectangulo recTemp;
	Circulo cirTemp;
	Triangulo triTemp;
	for(;i<2;i++){
		cout<<"Dame la base del rectangulo "<<i+1<<endl;
		cin>>n;
		recTemp.setBase(n);
		cout<<"Dame la altura del rectangulo "<<i+1<<endl;
		cin>>n;
		recTemp.setAltura(n);
		lista[i]=recTemp;
	}
	for(;i<4;i++){
		cout<<"Dame el radio del circulo "<<i+1<<endl;
		cin>>n;
		cirTemp.setRadio(n);
		lista[i]=cirTemp;
	}
	for(;i<6;i++){
		cout<<"Dame la base del triangulo "<<i+1<<endl;
		cin>>n;
		triTemp.setBase(n);
		cout<<"Dame la altura del triangulo "<<i+1<<endl;
		cin>>n;
		triTemp.setAltura(n);
		lista[i]=triTemp;
	}

	for(int i=0; i<6;i++){
		lista[i].muestraQueSoy();
		lista[i].calcArea();
		lista[i].calcPerimetro();
	}

	return 0;
}