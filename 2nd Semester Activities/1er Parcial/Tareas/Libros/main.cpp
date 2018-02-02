/*
Descripcion: Crea un objeto de clase libro, con parametros iniciales, le pregunta al usuario un porcentaje
 el cual utiliza para aumentar el precio del libro, hasta que indique el usuario.
Autor: Jose Guilllermo Saldana Cardenas A01039888
Fecha:1 febrero 2018

*/
#include <iostream>
#include <string>
using namespace std;
//Se incluye el header de la clase despues de las librerias.
#include "Libro.h"

int main()
{
    //Se crea el objeto lib con valores iniciales, y otras variables necesarias.
    Libro lib(12,"Armando Escandalos",100);
    double porcentaje;
    char op;

    //Se muestra inicalmente los valores al usuario.
    lib.muestra();

    do{
        //Se pide el porcentaje, se aumenta el precio, y se muestra el nuevo valor del libro.
        cout<<"Teclea el porcentaje a aumentar en decimal. Ej. 0.2 para aumentar el 20%"<<endl;
        cin>>porcentaje;

        lib.subePrecio(porcentaje);
        lib.muestra();

        //Se pregunta si quiere volver a aumentar el precio, si no se sale del loop y termina el programa.
        cout<<"Quieres aumentar el precio? (s/n)"<<endl;
        cin>>op;

    }while(op!='n');

    return 0;
}
