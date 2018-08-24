#include <iostream>
using namespace std;
#include "Cientifico.h"
#include "Gestor.h"



int main()   {
    string sNombre;
    int iNumero,iPublicaciones;
    Cientifico inve;
    Gestor man("Paco",12,"Lic.",456.9);
    cout<<"Dame el nombre, número y las publicaciones del cientifico "<<endl;
    cin>>sNombre>>iNumero>>iPublicaciones;
    Cientifico inv2(sNombre,iNumero,iPublicaciones);
    cout<<"Cientifico por default "<<endl;
    inve.mostrar();
    cout<<"Cientifico por parámetros "<<endl;
    inv2.mostrar();
    cout << "Datos del manager " << endl;
    man.mostrar();
    return 0;    }
