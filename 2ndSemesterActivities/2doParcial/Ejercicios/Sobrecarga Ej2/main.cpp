#include <iostream>

using namespace std;
#include "Bulto.h"

int main()
{
    int op,cuantos;
    Bulto bul1(20), bul2(10,300), bul3(9,500), bul4,bul5;
    do{
        cout<<"Selecciona la opción"<<endl;
        cout<<"1) ++ de un gramo al bulto uno"<<endl;
        cout<<"2) -- de un gramo al bulto dos"<<endl;
        cout<<"3) suma de x-cantidad de gramos al bulto tres"<<endl;
        cout<<"4) suma de bulto2 y bulto3"<<endl;
        cout<<"5) resta de x-cantidad de gramos al bulto tres"<<endl;
        cout<<"6) resta de bultos bul1-bul2"<<endl;
        cout<<"7) > bul1 > bul2"<<endl;
        cout<<"8) < bul1 < bul2"<<endl;
        cout<<"9) == bul1 == bul2"<<endl;
        cout<<"10) Salir"<<endl;
        cin >> op;
        switch (op){
            //
            case 1:{
                bul1++;
                bul1.muestra();
                break;
            }
            case 2:{
                bul2--;
                bul2.muestra();
                break;
            }
            case 3:{
                cout<<"dame la cantidad gramos"<<endl;
                cin>>cuantos;
                bul3=bul3+cuantos;
                bul3.muestra();
                break;
            }
            case 4:{
                bul4=bul2+bul3;
                bul4.muestra();
                break;
            }
            // a un Bulto le resta una cantidad de gramos y regresa el  Bulto modificado opcion 5
            case 5:{
                cout<<"dame la cantidad gramos a restar"<<endl;
                cin>>cuantos;
                bul3=bul3-cuantos;
                bul3.muestra();
                break;
            }
            //a un Bulto le resta otro Bulto y regresa el nuevo Bulto opcion 6
            case 6:{
                bul5=bul1-bul2;
                bul5.muestra();
                break;
            }
            // regresa true/false si el primer Bulto es > que el segundo
            case 7:{
                if (bul1 > bul2)
                    cout<<"Es mayor el primer bulto"<<endl;
                else
                   cout<<"Es mayor el segundo bulto"<<endl;;
                break;
            }
            // regresa true/false si el primer Bulto es < que el segundo
            case 8:{
                if (bul1 < bul2)
                    cout<<"Es menor el primer bulto"<<endl;
                else
                   cout<<"Es menor el segundo bulto"<<endl;;
                break;
            }
            // regresa true/false si el primer Bulto es igual que el segundo
            case 9:{
                if (bul1 == bul2)
                    cout<<"Son iguales "<<endl;
                else
                   cout<<"Son diferentes "<<endl;;
                break;
            }
        }
    } while (op != 10);
	return 0;
}