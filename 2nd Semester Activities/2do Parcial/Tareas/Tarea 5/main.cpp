/*
Descripción: Este programa guarda la información sobre salones, su número y las especificaciones que tiene su computadora.
Tambien muestra los salones que tengan especificaciones que indique el usuario.
Nombre: José Guillermo Saldaña A01039888
Fecha: 22 febrero 2018
*/

#include <iostream>
#include <string>
using namespace std;
//Se incluyen las clases de computadora y de salon.
#include "Computadora.h"
#include "Salon.h"

//En el main se muestra el menu y se indican las opciones de buscado de salones.
int main(){
    Salon sal[10];
    int n,idSalon,ram,op;
    string marca,sistOp;
//Se verifica que se ingresen entre 1 y 10 salones, los que se pueden guardar en el arreglo.
// si no es asi se vuelve a pedir el numero.
    do{
        cout<<"Cuantos salones hay?"<<endl;
        cin>>n;

        if(n>0 && n<11){
            for(int i=0;i<n;i++){

                //Se verifica que el numero de salon dado sea de 4 digitos.
                // Si no es asi se vuelve a pedir el numero del salon.
                do{
                    cout<<"Tecela el número del salon."<<endl;
                    cin>>idSalon;
                    if(idSalon<1000||idSalon>9999){
                        cout<<"Error: el salon debe de ser de cuatro digitos."<<endl;
                    }
                }while(idSalon<1000||idSalon>9999);


                sal[i].setIdSalon(idSalon);
                cout<<"Teclea la marca de la computadora del salon "<<idSalon<<endl;
                cin.ignore();
                getline(cin, marca);

                cout<<"Teclea el sistema operativo de la computadora"<<endl;
                cin.ignore();
                getline(cin,sistOp);

                cout<<"Teclea la cantidad de RAM que tiene la computadora"<<endl;
                cin>>ram;

                Computadora temporal(marca,sistOp,ram);
                sal[i].setCompuSalon(temporal);
            }
        }
        else{
            cout<<"Numero invalido, intente nuevamente."<<endl;
        }
    }while(n>11&&n<0);
    do{
        //Menu que se desplega.
        cout<<"Teclee la opcion deseada."<<endl;
        cout<<"1. Buscar por marca"<<endl;
        cout<<"2. Buscar por sistema operativo."<<endl;
        cout<<"3. Mostrar todos los salones."<<endl;
        cout<<"4. Salir."<<endl;
        cin>>op;

        switch(op){

            //Se pide la marca que quiere buscar y se desplegan los numeros de los salones que tengan esta marca
            case 1:
                cout<<"Teclee la marca que quiere buscar"<<endl;
                cin.ignore();
                getline(cin,marca);
                cout<<"IDs de salones con computadora de marca "<<marca<<":"<<endl;
                for(int i=0;i<n;i++){
                    if(marca==sal[i].getCompuSalon().getMarca()){
                        cout<<"- "<<sal[i].getIdSalon()<<endl;

                    }

                }
                cout<<endl;
                break;

            //Se pide el sistema operativo que se quiere buscar y se desplegan los numeros de salones que tengan este OS.
            case 2:
                cout<<"Teclee el sistema operativo que quiere buscar"<<endl;
                cin.ignore();
                getline(cin, sistOp);
                cout<<"IDs de salones con computadora con sistema operativo "<<marca<<":"<<endl;
                for(int i=0;i<n;i++){
                    if(sistOp==sal[i].getCompuSalon().getSistOperativo()){
                        cout<<"- "<<sal[i].getIdSalon()<<endl;

                    }

                }
                cout<<endl;
                break;

            //Se muestran todos los salones
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

            //Se termina el programa en el caso 4
            case 4:
                return 0;

            //Cualquier otro caso se toma como invalido.
            default:
                cout<<"Opcion invalida."<<endl;

        }


    }while(op!=4);

    return 0;
}
