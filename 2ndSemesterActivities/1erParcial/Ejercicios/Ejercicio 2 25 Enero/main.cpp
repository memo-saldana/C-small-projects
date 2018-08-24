//Descripcion: Utiliza la informacion del archivo Datos.txt para crear una
// factura con la informacion de los productos y genera un total de cobro.
//Autor: Jose Guilllermo Saldana Cardenas   A01039888
//Fecha:25 enero 2018
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char op='s';
    double clave,cantidad,pu,precio,total=0;
    ifstream ArchEnt;
    ofstream ArchSal;
    ArchEnt.open("Datos.txt");
    ArchSal.open("Factura.txt");

//Primero se ingresa el formato base, con un tab entre cada titulo.
    ArchSal<<"\tFACTURA"<<endl;
    ArchSal<<"Clave\tCantidad\t Precio Unitario\tPrecio"<<endl;

//El while loop verifica que se pueda agregar informacion a la variable de la
// clave para despues asignar a cada variable el valor de uno de los productos.
// Se calcula el precio de a partir de la cantidad y el precio y se le suma al
// total.

    while(ArchEnt>>clave){
        ArchEnt>>cantidad>>pu;
        precio=cantidad*pu;
        total+=precio;
        ArchSal<<clave<<"\t"<<cantidad<<"\t\t "<<pu<<"\t\t\t"<<precio<<endl;
    }

//Se inserta el total, con varios tabs para alinearlo correctamente.
    ArchSal<<"\t\t\t Total\t\t\t"<<total<<endl;
//Afirmacion visual para el usuario de que se completaron todas las acciones.
    cout<<"Factura creada correctamente."<<endl;

    return 0;
}
