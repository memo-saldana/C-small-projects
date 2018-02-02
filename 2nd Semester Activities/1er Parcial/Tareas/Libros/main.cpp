#include <iostream>
#include <string>
using namespace std;
#include "Libro.h"

int main()
{
    Libro lib(12,"Armando Escandalos",100);
    double porcentaje;
    char op;

    lib.muestra();

    do{

        cout<<"Teclea el porcentaje a aumentar en decimal. Ej. 0.2 para aumentar el 20%"<<endl;
        cin>>porcentaje;

        lib.subePrecio(porcentaje);
        lib.muestra();

        cout<<"Quieres aumentar el precio? (s/n)"<<endl;
        cin>>op;

    }while(op!='n');

    return 0;
}
