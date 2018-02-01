#include <iostream>
#include <iomanip>
using namespace std;

#include "Fraccion.h"

int main()
{
    //Creo un arreglo de objetos tipo fraccion con 5 posiciones max.
    Fraccion arrFracc[5];
    bool encuentra;
    double total,mayor;
    int op,cualVoy=0,num,den;

    do{
        cout<<"1.Dar de alta una fracción."<<endl;
        cout<<"2.Calcular suma fracciones."<<endl;
        cout<<"3.Fracción mayor."<<endl;
        cout<<"4.Fracciones maayoresa 1."<<endl;
        cout<<"5.Salir."<<endl;
        cin>>op;
        switch(op){
            case 1:
                if(cualVoy<5){
                    cout<<"Teclea numerador. "<<endl;
                    cin>>num;
                    cout<<"Teclea el denominador."<<endl;
                    cin>>den;

                    arrFracc[cualVoy].setNum(num);
                    arrFracc[cualVoy].setDen(den);
                    cualVoy++;

                }
                else{
                     cout<<"ERROR: Ya se dieron de alta las 5 fracciones."<<endl;
                }
                break;

            case 2:
                total=0;
                for(int i=0;i<cualVoy;i++){
                        total+=arrFracc[i].calcValorReal();
                }
                cout<<"La suma total es de: "<<total<<endl;
                break;


            case 3:
                mayor=0;
                for(int i;i<cualVoy;i++){
                    if(mayor <arrFracc[i].calcValorReal()){
                        mayor=arrFracc[i].calcValorReal();
                    }
                }
                break;

            case 4:
                encuentra = false;
                for(int i=0;i<cualVoy;i++){
                    if(arrFracc[i].getNum()>arrFracc[i].getDen()){
                        cout<<arrFracc[i].getNum()<<"/"<<arrFracc[i].getDen()<<endl;
                        encuentra = true;
                    }
                }
                if(!encuentra){
                    cout<<"No se encontraron fracciones mayores a 1."<<endl;
                }
        }

    }while(op!=5);


    return 0;
}
