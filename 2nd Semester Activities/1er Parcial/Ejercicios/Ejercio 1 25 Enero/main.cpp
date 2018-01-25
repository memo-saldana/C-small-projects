#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char op='s';
    double datos;
    ofstream ArchSal;
    ArchSal.open("Datos.txt");
    while(op!='n'){
        cout<<"Teclea la clave del producto: "<<endl;
        cin>>datos;
        ArchSal<<datos<<" ";

        cout<<"Teclea la cantidad del producto: "<<endl;
        cin>>datos;
        ArchSal<<datos<<" ";

        cout<<"Teclea el precio unitario del producto:"<<endl;
        cin>>datos;
        ArchSal<<datos<<endl;

        cout<<"Quieres ingresar otro producto? (s/n)"<<endl;
        cin>>op;
    }

    cout<<"Informacion guardada correctamente."<<endl;

    return 0;
}
