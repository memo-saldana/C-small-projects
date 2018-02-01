#include <iostream>
#include <string>
using namespace std;
#include "Salon.h"

int main()
{
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

    while(op!= 'n'){
        cout<<"Quedan "<<(sal.getCapacidad()-sal.getInscritos())<< " lugares disponibles para inscribir alumnos en la clase "<<sal.getNombreClase()<<" numero "<<sal.getNumSalon()<<endl;
        cout<<"Ingrese el numero de alumnos que desea inscribir."<<endl;
        cin>>n;

        if(sal.getCapacidad()>=(n+sal.getInscritos())){
            sal.inscribirAlumnos(n);
            cout<<"Alumnos inscritos correctamente."<<endl;
        }
        else{
            cout<<"No hay suficiente espacio para inscribir los alumnos, acción no realizada."<<endl;
        }
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
