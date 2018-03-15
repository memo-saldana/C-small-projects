#include <iostream>
using namespace std;
#include <math.h>
#include "Punto.h"
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"


int main(int argc, const char * argv[]) {
    Figura f1;
    Punto centro=Punto(3,4);
    cout << "Desplegano f1" << endl;
    f1.desplegar();
    cout << " Desplegando el circulo c1" << endl;
    Circulo c1(centro,"red",5);
    c1.desplegar();
    cout<<"El area del circulo es "<<c1.calcularArea()<<endl;
    cout<<"El perimetro del circulo es " << c1.calcularPerimetro()<<endl;
    Rectangulo r1(centro,"blue",3,4);
    cout << "Desplegando el rectangulo r1" << endl;
    r1.desplegar();
    cout<<"El area del rectangulo es "<<r1.calcularArea()<<endl;
    cout<<"El perimetro del rectangulo es "<<r1.calcularPerimetro()<<endl;
    return 0;
}