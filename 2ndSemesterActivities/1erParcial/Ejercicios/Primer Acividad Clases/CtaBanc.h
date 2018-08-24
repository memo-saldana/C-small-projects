#ifndef CTABANC_H_INCLUDED
#define CTABANC_H_INCLUDED

// Todo lo adentro de llaves es la interfaz. Lo demas es la implementación y se puede poner en un arch .cpp
// Por facilidad se hará abajo, que también es válido.
class CtaBanc {

private:
    // Definición de atributis, por lo pronto todos son privados
    string nombre;
    double saldo;

public:
    // Método Constructor, para inicializar objeto con valor en los atributos.
    CtaBanc();
    CtaBanc(string n, double d);

    // Métodos de acceso y modificación
    void setNombre(string n);
    void setSaldo(double d);

    string getNombre();
    double getSaldo();

    bool retira(double cantidad);
    void deposita(double cantidad);


};

//Desarrollo de constructores
CtaBanc::CtaBanc(){
    nombre = "";
    saldo = 0;
}
CtaBanc::CtaBanc(string n, double d){
    nombre = n;
    saldo = d;
}
//En desarrollo SIEMPRE se pone "NOMBRE DE CLASE"::método(){
void CtaBanc::setNombre(string n){
    nombre = n;
}

void CtaBanc::setSaldo(double d){
    saldo = d;
}

string CtaBanc::getNombre(){
    return nombre;
}

double CtaBanc::getSaldo(){
    return saldo;
}

bool CtaBanc::retira(double cantidad){
    if(cantidad>saldo){
        return false;
    }
    else{
        saldo-=cantidad;
        return true;
    }
}
void CtaBanc::deposita(double cantidad){
    saldo+=cantidad; //saldo = saldo + cantidad;
}


#endif // CTABANC_H_INCLUDED
