//
//  main.cpp
//  Clase Fecha
//
//  Created by María Esperanza Garza Leal on 2/15/18.
//  Copyright © 2018 María Esperanza Garza Leal. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

#include "Fecha.h"

int main(int argc, const char * argv[]) {

    Fecha datos[5];
    char resp;
    int d, m, a;
    int indice = 0;
    do {
        cout<<"Teclea el dia, mes y año numéricos "<<endl;
        cin>>d>>m>>a;
        datos[indice].setDia(d);
        datos[indice].setMes(m);
        datos[indice].setAnio(a);
        indice++;
        if (indice >=5){
            cout<<"Ya no se pueden dar de alta mas fechas, arreglo lleno"<<endl;
            resp='n';
        }
        else {
            cout<<"Desea dar de alta otra fecha? (s/n)"<<endl;
            cin>>resp;
        }

    }while ((resp == 'S' || resp == 's') && (indice < 5));

    for (int i=0; i<indice; i++){
        if (datos[i].esBisiesto()){
            datos[i].muestra();
            cout<<" es bisiesto "<<endl;
        }
        else{
            datos[i].muestra();
            cout<<" NO es bisiesto "<<endl;
        }
    }

    return 0;
}
