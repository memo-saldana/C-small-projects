//Descripcion: El usuario da los datos de un salon, y va agregando alumnos hasta llenar su capacidad o hasta que indique el usuario.
//Autor: Jose Guilllermo Saldana Cardenas A01039888
//Fecha:1 febrero 2018
#include <iostream>
#include <string>
using namespace std;
//Se incluye el header de la clase salon despues de las librerias.
#include "Salon.h"

int main()
{
    //Se crean las variables que llenara el usuario para crear el objeto de clase salon.
    string salon;
    int cap,num,n;
    char op;
    cout<<"Teclea el nombre del salon."<<endl;
    getline(cin,salon);
    cout<<"Teclea la capacidad del salon"<<endl;
    cin>>cap;
    cout<<"Teclea el numero de la  clase."<<endl;
    cin>>num;

    Salon sal(cap,salon,0,num);


    //Se crea un loop while para llenar el salon mediante un numero dado por el usuario.
    while(op!= 'n'){

        //Primero se despliegan la cantidad de lugares en el salon indicado y se pide el numero de alumnos a inscribir.
        cout<<"Quedan "<<(sal.getCapacidad()-sal.getInscritos())<< " lugares disponibles para inscribir alumnos en la clase "<<sal.getNombreClase()<<" numero "<<sal.getNumSalon()<<endl;
        cout<<"Ingrese el numero de alumnos que desea inscribir."<<endl;
        cin>>n;

        //Se verifica que los alumnos que hay suficiente espacio en el salon para inscribir a los alumnos.
        if(sal.getCapacidad()>=(n+sal.getInscritos())){
            sal.inscribirAlumnos(n);
            //Confirmacion visual para el usuario.
            cout<<"Alumnos inscritos correctamente."<<endl;
        }
        else{
            //Se muestra el mensaje al usuario si no hay suficiente espacio inscribir a los alumnos.
            cout<<"No hay suficiente espacio para inscribir los alumnos, acción no realizada."<<endl;
        }
        //Se revisa si aun quedan mas espacios donde inscribir alumnos, si no se termina el loop, y si es posible se pregunta al usuario.
        if(sal.getCapacidad()==sal.getInscritos()){
            cout<<"No hay mas espacio en el salon."<<endl;
            op='n';
        }
        else{
            cout<<"Desea agregar más alumnos? (s/n)"<<endl;
            cin>>op;
        }


    }




    return 0;
}
