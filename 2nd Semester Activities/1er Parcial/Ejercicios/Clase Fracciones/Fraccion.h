#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED

class Fraccion{

private:
    int num;
    int den;

public:

    Fraccion();
    Fraccion(int n, int d);
    void setNum(int n);
    void setDen(int d);
    int getNum();
    int getDen();
    double CalcValorReal();

};

Fraccion::Fraccion(){
    num=1;
    den=2;
}

Fraccion::Fraccion(int n, int d){
    num=n;
    den=d;
}

void Fraccion::setNum(int n){
    num=n;
}
void Fraccion::setDen(int d){
    den=d;
}
int Fraccion::getNum(){
    return num;
}
int Fraccion::getDen(){
    return den;
}
double Fraccion::CalcValorReal(){
    double val;

    val= 1.0*(num/den);

    return val;

}


#endif // FRACCION_H_INCLUDED
