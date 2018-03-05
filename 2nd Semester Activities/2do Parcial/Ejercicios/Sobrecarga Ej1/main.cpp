#include <iostream>
#include <cmath>
using namespace std;
#include "Cuadratica.h"
int main()
{
 	
	double x;
 	Cuadratica ec1(5,3,2), ecRes;
	Cuadratica ec3 = ec1; // ec1 y ec3 tienen los mismos valores.
	Cuadratica ec2;
 	cout << "Teclea los coeficientes para la segunda ecuación" << endl;

	cin >> ec2;

	cout <<ec2;

	cout<<"Num:"<<endl;

	cin>> x;

	cout << ec2.evalua(x)<<endl;
 
 /*********************************
 cout << endl;
 cout << "=== Suma de Ecuaciónes 1 y 2" << endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :";
 ec2.muestra();
 ecRes = ec1+ec2;
 // Usa la sobrecarga para hacer la suma
 cout << "Resultado :";
 ecRes.muestra();
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :";
 ec2.muestra();
 cout << endl;


 /********************************
 cout << endl;
 cout << "=== Resta de Ecuaciónes 1 y 2" << endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :" ;
 ec2.muestra();
 // Usa la sobrecarga para hacer la resta
 ecRes=ec1-ec2;
 cout << "Resultado :";
 ecRes.muestra();
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :";
 ec2.muestra();
 cout << endl;


 /*******************************
 cout << endl;
 cout << "=== Multiplica Ecuación 1 por valor entero 2" << endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 // Usa la sobrecarga para hacer la multiplicación
 ecRes=ec1*2;
 cout << "Resultado :";
 ecRes.muestra();
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << endl;
 /*********************************
 cout << endl;
 cout << "=== Compara con == ecuación 1 y ecuación 2, deben ser
diferentes" << endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :" ;
 ec2.muestra();
 if ( // agrega la comparación que hace falta )
 cout << "Son iguales" << endl;
 else
 cout << "Son diferentes " << endl;


 /*********************************
 cout << endl;
 cout << "=== Compara con == ecuación 1 y ecuación 3, deben ser iguales"
<< endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :" ;
 ec2.muestra();
 if (// agrega la comparación que hace falta)
 cout << "Son iguales" << endl;
 else
 cout << "Son diferentes " << endl;

/*********************************
 cout << endl;
 cout << "=== Aplica += para sumar Ecuaciónes 1 y 2" << endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :";
 ec2.muestra();

 // Usa la sobrecarga para hacer el +=

 cout << "Ecuación 1 :" ;
 ec1.muestra();
 cout << "Ecuación 2 :";
 ec2.muestra();
 cout << endl;

 /******************************
 cout << endl;
 cout << "=== Aplica ++ a Ecuación 1 " << endl;
 cout << "Ecuación 1 :" ;
 ec1.muestra();
 // Usa la sobrecarga para hacer el incremento
 cout << "Regresa :";
 ecRes.muestra();
 cout << "Ecuación 1 :" ;
 ec1.muestra();

 */
 return 0;
}