#include <iostream>
#include <string>
using namespace std;
#include "Pilas.h"

int main(){
	Pilas<int> iPila;
	Pilas<double> dPila;
	Pilas<char> cPila;

	//Para la pila de enteros lo siguiente:

	iPila.meter(8);
	iPila.meter(10);
	iPila.observa();
	iPila.meter(7);
	iPila.sacar();
	iPila.meter(9);

	//Pila de doubles

	dPila.meter(12.8);
	dPila.meter(9.5);
	dPila.meter(5.6);
	dPila.observa();
	dPila.sacar();
	dPila.sacar();
	dPila.observa();

	//Pila de chars

	cPila.meter('B');
	cPila.meter('C');
	cPila.observa();
	cPila.meter('L');
	cPila.meter('T');
	cPila.sacar();
	cPila.observa();

	return 0;


}
