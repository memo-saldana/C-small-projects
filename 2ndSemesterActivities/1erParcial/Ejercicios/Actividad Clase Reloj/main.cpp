#include <iostream>
using namespace std;
#include "Reloj.h"

int main()
{
    Reloj hrInicial,hrFinal;
    int n;
    cout<<"Teclea la hora inicial"<<endl;
    cin>>n;
    hrInicial.setHora(n);
    cout<<"Teclea el minuto inicial"<<endl;
    cin>>n;
    hrInicial.setMinu(n);

    cout<<"Teclea la hora final"<<endl;
    cin>>n;
    hrFinal.setHora(n);
    cout<< "Teclea el minuto final"<<endl;
    cin>>n;
    hrFinal.setMinu(n);

    cout<<"Hora Inicial: ";
    hrInicial.muestra();

    cout<<endl<<"Hora Final: ";
    hrFinal.muestra();

    return 0;
}
