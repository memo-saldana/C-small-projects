#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int mat;
    string Nombre;
    ifstream ArchEnt;
    ofstream ArchUno, ArchDos,ArchTres;
    ArchUno.open("Grupo1.txt");
    ArchUno<<"**** Grupo 1 ****"<<endl;
    ArchDos.open("Grupo2.txt");
    ArchDos<<"**** Grupo 2 ****"<<endl;
    ArchTres.open("Grupo3.txt");
    ArchTres<<"**** Grupo 3 ****"<<endl;
    ArchEnt.open("SemanaI.txt");
    while(ArchEnt>>mat){
        getline(ArchEnt,Nombre);
        if(Nombre[Nombre.length()-1]=='1'){
            Nombre.erase(Nombre.length()-1);
            ArchUno<<mat<<Nombre<<endl;
        }
        else if(Nombre[Nombre.length()-1]=='2'){
            Nombre.erase(Nombre.length()-1);
            ArchDos<<mat<<Nombre<<endl;
        }
        else if(Nombre[Nombre.length()-1]=='3'){
            Nombre.erase(Nombre.length()-1);
            ArchTres<<mat<<Nombre<<endl;
        }
    }

    ArchEnt.close();
    ArchUno.close();
    ArchDos.close();
    ArchTres.close();

    cout<< "Alumnos ordenados por grupo"<<endl;

    return 0;
}
