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

void Triangulo::getBase(){
    return base;
}
void Triangulo::getAltura(){
    return altura;
}
double Triangulo::setAltura(double a){
    altura = a;
}
double Triangulo::setBase(double b){
    base = b;
}

double Triangulo::calcArea(){
    return ((base * altura) / 2);
}
double Triangulo::calcPerimetro(){
    return (base * 3);
}

void Triangulo::muestraQueSoy(){
    cout << "soy un Triangulo";
}

#endif //  Triangulo_h_included