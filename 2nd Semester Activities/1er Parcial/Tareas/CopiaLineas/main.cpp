//Descripcion: Pide al usuaro un nombre para el un archivo nuevo y un numoero, y
// copia las ultimas lineas dichas por el usuario a un archivo nuevo con el
// nombre dado
//Autor: Jose Guilllermo Saldana Cardenas   A01039888
//Fecha:11 enero 2018
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void CopiaFichero(string nombre, int iNum){
    ifstream ArchOr;
    int lineas=0;
    ArchOr.open(nombre);
    while(!ArchOr.eof()){
        lineas++;


    }

    cout<<lineas<<endl;


}
int main()
{
    int n;
    string nombre;
    cout<<"Teclea el nombre del archivo."<<endl;
    cin>>nombre;
    cout<<"Teclea las lineas que quieres copiar."<<endl;
    cin>>n;

    CopiaFichero(nombre, n);
    return 0;
}
