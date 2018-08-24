#include <iostream>
#include <string>
using namespace std;
#include "CtaBanc.h" //incluye todo lo que esta arriba, si no esta arriba no tiene acceso

int main(){

    string nombre;
    int op;
    double cantidad,saldo;
    cout << "Teclea el nombre del cuentaHabiente" << endl;
    getline(cin,nombre)
;    cout<< "Teclea el saldo de la cuenta "<< endl;
    cin>>saldo;
    CtaBanc miCuenta(nombre, saldo);

    while(op!=4){
        cout<<"1. Deposita"<<endl;
        cout<<"2. Retira"<<endl;
        cout<<"3. Consulta"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>op;
        switch(op){
            case 1:
                cout<<"Teclea la cantidad que quieres depositar: ";
                cin>>cantidad;
                miCuenta.deposita(cantidad);
                break;
            case 2:
                cout<<"Teclea la cantidad que quieres retirar: ";
                cin>>cantidad;
                if(! miCuenta.retira(cantidad)){
                    cout<<endl<< "ERROR: saldo no suficiente para retiro"<<endl;
                }
                break;
            case 3:
                cout<<"Saldo Actual del usuario "<<miCuenta.getNombre()<<": "<<miCuenta.getSaldo()<<endl;
                break;


        }
    }
    return 0;
}
