//Descripcion: Pide al usuaro un nombre para el un archivo nuevo y un numoero, y
// copia las ultimas lineas dichas por el usuario a un archivo nuevo con el
// nombre dado
//Autor: Jose Guilllermo Saldana Cardenas   A01039888
//Fecha:11 enero 2018
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
La funcion tiene como proposito copiar las ultimas n lineas dadas por el usuario.
Los parametros que recibe son el nombre del archivo del cual obtiene la informacion,
el numero de lineas que quiere copiar, del final hacia el principio, y el nombre del
archivo al cual se va a copiar.
La funcion no tiene un valor de retorno, ya que es void.
*/
void CopiaFichero(string nombre, int iNum, string nuevo){
    ifstream ArchOr;
    ofstream ArchNu;
    int lineas=0;
    string linea;

    ArchOr.open(nombre.c_str());
    ArchNu.open(nuevo.c_str());

// Primero se cuentan el numero de lineas que tiene el archivo.
    while(!ArchOr.eof()){
        getline(ArchOr, linea);
        lineas++;
    }
// Valida si el archivo tiene suficientes lineas. Notese que se debe cerrar y volver a abrir el archivo ya que el
// contar las lineas hace que se recorra todo el documento una vez.
    if(lineas>iNum){
        ArchOr.close();
        ArchOr.open(nombre.c_str());
// Utiliza el numero de lineas para saber cuales lineas copiar y cuales no.
        for(int i=0;i<lineas;i++){

            getline(ArchOr,linea);

            if(i>=(lineas-iNum)){
                ArchNu<<linea<<endl;
            }
        }
        cout<<endl<<"Copiado exitoso."<<endl;
    }
    else{
// Mensaje en caso de no poder copiarse por falta de lineas.
        cout<<"No se puede realizar la copia."<<endl;
    }


}
int main()
{
    int n;
    string nombre,nuevo;
    char op;

    cout<<"Teclea el nombre del archivo que copiará."<<endl;
    cin>>nombre;
    cout<<"Teclea las lineas que quieres copiar."<<endl;
    cin>>n;

//Da la opcion de darle un nombre al archivo nuevo, en caso de que no
// sea dado por el usuario, se asigna uno por default.
    cout<<"Desea ponerle nombre al archivo nuevo? (s/n)"<<endl;
    cin>>op;
    if(op!='s'){
            nuevo="ArchNuevo.txt";
    }
    else{
        cout<<"Teclea el nombre del archivo nuevo."<<endl;
        cin>>nuevo;
    }

//Llamado a la funcion
    CopiaFichero(nombre, n,nuevo);

    return 0;
}
