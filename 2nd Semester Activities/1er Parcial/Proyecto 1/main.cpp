/*
Descripcion: Este proyecto utiliza  un archivo con la informacion de una o varias
personas para generar el CURP de cada persona y guardarlos en un archivo.
Nombre: Jose Guillermo Saldana Cardenas A01039888
Fecha: 5 de febrero 2018
*/

//Se utiliza iostream para cin y cout del nombre del archivo
#include <iostream>
//Se utiliza fstream para leer o escribir en archivos
#include <fstream>
//Se utilizan strings para leer datos y generar el CURP
#include <string>
//Se utilizan ctime y cstdlib para generar los numeros aleatorios encesarios
// para generar los CURPs
#include <ctime>
#include<cstdlib>
using namespace std;
//Se incluye el header  de la clase Persona.
#include "Persona.h"

//La funcion se utiliza para asignarle un nombre al archivo.
// Esta regresa el nombre como tipo string.
string obtenerNombre(){
    string NomArch;
    cout<<"Teclea el nombre del archivo."<<endl;
    getline(cin,NomArch);
    return NomArch;
}

// La funcion utiliza la clase Persona para regresar un solo string con el curp.
string crearCURP(string datos, Persona per){
    string curp="";
    curp+=per.creaIniciales();
    curp+=per.creaFecha();
    curp+=per.creaSexo();
    curp+=per.creaEstado();
    curp+=per.creaConsonantes();
    curp+=per.creaID();
    return curp;
}

//Esta funcion lee todo el archivo y utiliza la funcion crearCURP para crear el curp de cada persona en el archivo.
void leerArch(ifstream& archEnt, ofstream& archSal){

    string datos,CURP;
//se utiliza un while para leer el archivo hasta que se llegue al final.
    while(!archEnt.eof()){
//Cada linea de texto se utiliza para crear un objeto Persona. Esto identifica
// cada parte de la informacion necesaria para generar el curp, y luego se
// se llaman los metodos necesarios para generar el CURP. Esto se repite con
// cada linea de texto

        getline(archEnt,datos);
        Persona per(datos);
        CURP=crearCURP(datos, per);
        archSal<<CURP<<endl;

    }
}


//Esta funcion se utiliza para cerrar ambos archivos, el de entrada y salida. Es void
// ya que  no regresa ningun valor.
void cerrarArchs(ifstream& archEnt, ofstream& archSal){
    archEnt.close();
    archSal.close();

}

void confirmacion(){
//Confirmacion para el usuario que se generaron los CURPs.
    cout<<endl<<"CURP generado(s)."<<endl;
}

int main(){

//Variables necesarias e inicalizacion del seed para los numeros aleatorios.
    srand(time(NULL));
    ofstream archSal;
    ifstream archEnt;
//Se crea el archivo donde se guarden los CURPs
    archSal.open("CURP.txt");

//Se pide el nombre del archivo con datos al usuario y se abre el archivo
// con ese nombre
    string NomArch;
    NomArch=obtenerNombre();
    archEnt.open(NomArch.c_str());

    leerArch(archEnt,archSal);

    confirmacion();
    cerrarArchs(archEnt,archSal);

    return 0;
}
