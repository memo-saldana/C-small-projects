#ifndef Rectangulo_h_included
#define Rectangulo_h_included
#include "Figura.h"
class Rectangulo : public Figura{
public:
    Rectangulo();
    Rectangulo(double b, double a);
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

Rectangulo::Rectangulo(){
    base = 0;
    altura = 0;
}
Rectangulo::Rectangulo(double b, double a){
    base = b;
    altura = a;
}

double Rectangulo::getBase(){
    return base;
}
double Rectangulo::getAltura(){
    return altura;
}
void Rectangulo::setAltura(double a){
    altura = a;
}
void Rectangulo::setBase(double b){
    base = b;
}

double Rectangulo::calcArea(){
    return base * altura;
}
double Rectangulo::calcPerimetro(){
    return (2 * base + 2 * altura);
}

void Rectangulo::muestraQueSoy(){
    cout << "soy un Rectangulo";
}

#endif //  Rectangulo_h_included