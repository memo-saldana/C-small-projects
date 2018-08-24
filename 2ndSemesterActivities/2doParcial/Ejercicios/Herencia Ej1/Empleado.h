    #pragma once


class Empleado {
protected:
    string nombre;
    int numero;
public:
    Empleado();
    Empleado (string, int);
    string getNombre();
    int getNumero();
    void mostrar();
};
Empleado::Empleado(){

  Nombre = "";
  Numero = 0;
}

Empleado::Empleado (string nom, int nume){
  nombre = nom;
  numero = nume;
}
string Empleado::getNombre(){
    return nombre;
}
int Empleado::getNumero(){
        return numero;
}
void Empleado::mostrar(){
                cout<< "La persona de nombre "<<nombre<<" con edad de "<<numero<<endl; 
}