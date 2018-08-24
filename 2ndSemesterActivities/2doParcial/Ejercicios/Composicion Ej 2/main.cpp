#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include "Persona.h"

int main()
{
    Persona per[5];
    int op,i=0, min=0, max=1000,mi,ma;
    string nombre;
    char genero;
    do{
        cout<<"Seleccione la opcion."<<endl;
        cout<<"1. Dar de alta persona."<<endl;
        cout<<"2. Consultar lista de personas."<<endl;
        cout<<"3. Consultar personas por genero."<<endl;
        cout<<"4. Mostrar persona más joven y más grande. (edad)"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>op;

        switch(op){
            case 1:
                if(i<5){
                    cout<<"Teclea nombre de la persona."<<endl;
                    getline(cin,nombre);
                    cout<<"Teclea el genero (h/m)."<<endl;
                    cin>>genero;
                    cout<<"Tecela el dia,mes y año"<<endl;
                    cin>>dia>>mes>>anio;
                    per[i].setNombreAlbum(nombre);
                    per[i].setGenero(genero);
                    Fecha temporal(dia,mes,anio);
                    per[i].setFechaLanzamiento(temporal);
                }
                else{
                    cout<<"Error: Arreglo de personas lleno."<<endl;
                }
                break;

            case 2:

                for(int j=0;j<i;i++){
                    per[j].muestra();
                }
                break;
            case 3:
                cout<<"Teclea el genero que buscas (h/m)"<<endl;
                cin>>genero;
                for(int j=0;j<i;j++){
                    if(genero==per[j].getGenero()){
                        per[j].muestra();
                    }

                }
                break;
            case 4:
                for(int j=0;j<i;j++){
                    if(per[j].calculaEdad()<min){
                        mi=j;
                        min=per[j].calculaEdad();

                    }
                    if(per[j].calculaEdad()>max){
                        ma=j;
                        max=per[j].calculaEdad();

                    }
                }
                cout<<"Mas joven:"<<endl;
                per[mi].muestra();
                cout<<"Mas grande:"<<endl;
                per[ma].muestra();
                break;
            case 5:
                return 0;



    }while(op!=5);
    return 0;
}
