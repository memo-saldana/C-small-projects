//Descripcion: Compara dos archivos .txt y muesttra en la consola las
// lineas que son diferentes.
//Autor: Jose Guilllermo Saldana Cardenas   A01039888
//Fecha: 29 enero 2018
#include <iostream>
#include <fstream>
using namespace std;

int main(){

// Se crean 2 variables para y dos ifstreams, en donde se leeran los archivos.
// Tambien se crea un booleano para ir checando si cada linea es igual o no.
    ifstream Arch1, Arch2;
    string linea1,linea2;
    bool Iguales;
    Arch1.open("ArchUno.txt");
    Arch2.open("ArchDos.txt");


// Se utiliza un while para leer los dos archivos completos, se guarda una
// linea de cada archivo para compararlas. Tambien se vuelve a poner el
// booleano en verdadero desde un principio y al finalizar la revision de
// cada linea.
    while(!Arch1.eof()){
        Iguales=true;
        getline(Arch1,linea1);
        getline(Arch2,linea2);

// Se comparan las lineas de los dos archivos con un for, si no son iguales
// se cambia el valor del booleano
        for(int i=0;i<linea1.length();i++){
            if(linea1[i]!=linea2[i]){
               Iguales=false;
            }

        }
// Si no son iguales, se muestran las lineas que son diferentes.
        if(!Iguales){
             cout<<"Arch1\t"<<linea1<<endl;
             cout<<"Arch2\t"<<linea2<<endl;
        }

    }

    return 0;
}
