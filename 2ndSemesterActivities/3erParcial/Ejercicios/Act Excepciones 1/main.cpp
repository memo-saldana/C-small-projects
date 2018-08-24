#include <iostream>
using namespace std;

#include "Pilas.h"

int main(){

	
try{
		Pilas;
		cout<<"El valor real de la fraccion es "<<f1.realValue()<<endl;
		
	}
	catch (Fractions::errorFrac){
		cout<<"ERROR: El denominador debe ser difernte de 0"<<endl;
	}
	return 0;
}