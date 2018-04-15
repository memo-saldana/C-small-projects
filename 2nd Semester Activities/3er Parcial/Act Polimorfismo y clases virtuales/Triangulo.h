#ifndef Triangulo_h_included
#define Triangulo_h_included
#include "Figura.h"
class Triangulo : public Figura{
public:
    Triangulo();
    Triangulo(double b, double a);
    void setBase(double b);
    void setAltura(double a);
    double getBase();
    double getAltura();
    double calcArea();
    double calcPerimetro();
    void muestraQueSoy();

private:
    double base, altura;
};

Triangulo::Triangulo(){
    base = 0;
    altura = 0;
}
Triangulo::Triangulo(double b, double a){
    base = b;
    altura = a;
}

double Triangulo::getBase(){
    return base;
}
double Triangulo::getAltura(){
    return altura;
}
void Triangulo::setAltura(double a){
    altura = a;
}
void Triangulo::setBase(double b){
    base = b;
}

double Triangulo::calcArea(){
    return ((base * altura) / 2);
}
double Triangulo::calcPerimetro(){
    return (base * 3);
}

void Triangulo::muestraQueSoy(){
    cout << "Soy un triangulo."<<endl;
}

#endif //  Triangulo_h_included