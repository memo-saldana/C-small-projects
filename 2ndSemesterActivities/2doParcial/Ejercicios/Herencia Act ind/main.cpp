#include <iostream>
using namespace std;

#include "CtaBanc.h1234"
#include "Chequera.h"

int main ()
{
	Chequera ch;
	CtaBanc cb;
	int numCta;
	double saldo, com;
	
	cout << "Teclea el numero de cuenta de la cuenta bancaria ";
	cin >> numCta;
	
	cb.setNumCuenta(numCta);
	
	cout << "Teclea el saldo inicial para el cliente de la cuenta bancaria ";
	cin >> saldo;
	
	cb.setSaldo(saldo);
	
	cout << "Teclea el numero de cuenta de la chequera ";
	cin >> numCta;
	
	ch.setNumCuenta(numCta);
	
	cout << "Teclea el saldo inicial para el cliente de la chequera ";
	cin >> saldo;
	
	ch.setSaldo(saldo);
	
	cout << "Teclea  la comision por retiro de la chequera ";
	cin >> com;
	
	ch.setComision(com);
	
	cout << "Los datos de la cuenta bancaria son " << endl;
	cb.mostrar();
	
	cout << "Los datos de la cuenta de cheques son " << endl;
	ch.mostrar();
	
	cb.retira(100);
	ch.retira(100);
	
	cout << "despues de retirar datos de cuenta bancaria " << endl;
	cb.mostrar();
	
	cout << "despues de retirar datos de chequera " << endl;
	ch.mostrar();
	
}
