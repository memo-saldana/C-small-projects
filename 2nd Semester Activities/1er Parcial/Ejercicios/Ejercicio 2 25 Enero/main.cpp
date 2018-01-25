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
    ArchSal<<"\tFACTURA"<<endl;
    ArchSal<<"Clave\tCantidad\t Precio Unitario\tPrecio"<<endl;
    while(ArchEnt>>clave){
        ArchEnt>>cantidad>>pu;
        precio=cantidad*pu;
        total+=precio;
        ArchSal<<clave<<"\t"<<cantidad<<"\t\t "<<pu<<"\t\t\t"<<precio<<endl;
    }

    ArchSal<<"\t\t\t Total\t\t\t"<<total<<endl;

    cout<<"Factura creada correctamente."<<endl;

    return 0;
}
