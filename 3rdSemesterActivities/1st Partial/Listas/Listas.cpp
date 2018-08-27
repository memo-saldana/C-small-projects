#include <iostream>
#include <algorithm>
using namespace std;
#include "Lista.h"

int main(){
	Lista<int> iLista;
	iLista.add(5);
	iLista.add(2);
	iLista.add(1);
	iLista.add(3);

	cout<<iLista.getCant()<<endl<<iLista.getDato(2)<<endl;

	cout<<iLista.search(5)<<endl;

	Lista<int> iLista2;

	iLista2 = iLista;

	cout<<"iLista"<<endl;
	iLista.print();

	cout<<endl<<"iLista2"<<endl;
	iLista2.print();

	if(iLista == iLista2){
		cout<<endl<<"Son iguales"<<endl<<endl;
	}
	else{
		cout<<endl<<"NO son iguales"<<endl<<endl;
		
	}

	iLista2.sort(true);

	cout<<"iLista"<<endl;
	iLista.print();

	cout<<endl<<"iLista2"<<endl;
	iLista2.print();

	if(iLista == iLista2){
		cout<<endl<<"Son iguales"<<endl<<endl;
	}
	else{
		cout<<endl<<"NO son iguales"<<endl<<endl;
		
	}

	iLista2.sort(false);
	cout<<endl<<"iLista2"<<endl;
	iLista2.print();
	
	Lista<int> iLista3(iLista2);

	cout<<endl<<"iLista3"<<endl;
	iLista3.print();
	return 0;
}