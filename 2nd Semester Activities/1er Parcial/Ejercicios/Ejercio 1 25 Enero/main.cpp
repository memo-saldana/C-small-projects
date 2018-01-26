//Descripcion: Pide al usuario datos de un producto, su clave, cantidad
// y precio unitario, y los guarda en un archivo llamad Datos.txt
//Autor: Jose Guilllermo Saldana Cardenas   A01039888
//Fecha:25 enero 2018
#include <iostream>
#include <fstream>
using namespace std;

int main(){

/*
El programa corre un while loop, el cual sigue activo mientras el usuario
no indique que pare. La variable datos son reutilizadas, pues al guardar la
informacion que ingresa el usuario, se guardan en el archivo y se puede
volver a utilizar la variable, ahorrando memoria.
*/
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

    //Se reafirma que se guardo la informacion al  usuario, poniendo un cout
    // por fuera del while.

    cout<<"Informacion guardada correctamente."<<endl;

    return 0;
}
