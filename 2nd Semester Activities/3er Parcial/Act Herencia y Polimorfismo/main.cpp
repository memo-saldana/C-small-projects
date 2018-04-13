#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"


int main(){
	
	Animal *ani[3];
	
	/*
	Animal ani[3];
	Animal an("Animalita",2018);
	an.muestra();
	ani[0]=an;
	*/

	Gato *miGato2 = new Gato("Tom",1950);
	miGato2->muestra();
	ani[0]=miGato2;
	

	Gato gat;
	gat.setNombre("Silvestre");
	gat.setAnioNacim(1947);

	gat.muestra();
	ani[1]=&gat;

	Perro per("Firulais",1947);
	per.muestra();
	ani[2]=&per;
	for(int i=0;i<3;i++){
		
		*ani[i]->habla();
		*ani[i]->muestra();

	}

}