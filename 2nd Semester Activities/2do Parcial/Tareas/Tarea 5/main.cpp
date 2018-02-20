#include <iostream>
#include <string>
using namespace std;
#include "Computadora.h"
#include "Salon.h"

int main(){
    Salon sal[10];
    int n,idSalon,ram,op;
    string marca,sistOp;

    do{
        cout<<"Cuantos salones hay?"<<endl;
        cin>>n;

        if(n>0 && n<11){
            for(int i=0;i<n;i++){
                cout<<"Tecela el número del salon."<<endl;
                cin>>idSalon;

                sal[i].setIdSalon(idSalon);
                cout<<"Teclea la marca de la computadora del salon "<<idSalon<<endl;
                cin>>marca;

                cout<<"Teclea el sistema operativo de la computadora"<<endl;
                cin>>sistOp;

                cout<<"Teclea la cantidad de RAM que tiene la computadora"<<endl;
                cin>>ram;

                Computadora temporal(marca,sistOp,ram);
                sal[i].setCompuSalon(temporal);
            }
        }
        else{
            cout<<"Numero invalido, intente nuevamente."<<endl;
        }
    }while(n<11&&n>0);
    do{

        cout<<"Teclee la opcion deseada."<<endl;
        cout<<"1. Buscar por marca"<<endl;
        cout<<"2. Buscar por sistema operativo."<<endl;
        cout<<"3. Mostrar todos los salones."<<endl;
        cout<<"4. Salir."<<endl;
        cin>>op;

        switch(op){

            case 1:
                cout<<"Teclee la marca que quiere buscar"<<endl;
                cin>>marca;
                cout<<"IDs de salones con computadora de marca "<<marca<<":"<<endl;
                for(int i=0;i<n;i++){
                    if(marca==sal[i].getCompuSalon().getMarca()){
                        cout<<"- "<<sal[i].getIdSalon()<<endl;

                    }

                }
                cout<<endl;
                break;

            case 2:
                cout<<"Teclee el sistema operativo que quiere buscar"<<endl;
                cin>>sistOp;
                cout<<"IDs de salones con computadora con sistema operativo "<<marca<<":"<<endl;
                for(int i=0;i<n;i++){
                    if(sistOp==sal[i].getCompuSalon().getSistOperativo()){
                        cout<<"- "<<sal[i].getIdSalon()<<endl;

                    }

                }
                cout<<endl;
                break;

            case 3:
                cout<<"Salones registrados: "<<endl;
                for(int i=0;i<n;i++){
                    cout<<"ID: "<<sal[i].getIdSalon()<<endl;
                    cout<<"Computadora:"<<endl;
                    cout<<"- Marca: "<<sal[i].getCompuSalon().getMarca()<<endl;
                    cout<<"- OS: "<<sal[i].getCompuSalon().getSistOperativo()<<endl;
                    cout<<"- RAM: "<<sal[i].getCompuSalon().getRam()<<endl;
                    cout<<endl;
                }
                cout<<endl;
                break;

            case 4:
                return 0;

            default:
                cout<<"Opcion invalida."<<endl;

        }


    }while(op!=4);

    return 0;
}
