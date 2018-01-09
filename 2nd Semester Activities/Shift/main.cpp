#include <iostream>

using namespace std;

void LlenarDatos(int arrDatos[])
{
    for(int i=0;i<12;i++)
    {
        cout<<"Ingresa el numero "<<(i+1)<<endl;
        cin>>arrDatos[i];
    }
}

void RecorreDerecha(int arrDatos[])
{
    int tmp=arrDatos[11];
    for(int i=11;i>=0;i--)
    {
        arrDatos[i]=arrDatos[i-1];
    }
    arrDatos[0]=tmp;
}

void MuestraDatos(int arrDatos[])
{
    for(int i=0;i<12;i++)
    {
        cout<<arrDatos[i]<<" ";
    }
}
int main()
{
    int arrDatos[12];
    char Menu;
    LlenarDatos(arrDatos);


    while(true)
    {
        cout<<endl<<"Seleccione una opción:"<<endl;
        cout<<endl<<"1. Recorre a derecha"<<endl;
        cout<<endl<<"2. Muestra datos"<<endl;
        cout<<endl<<"3. Salir"<<endl;
        cout <<endl<<endl;
        cin>>Menu;
        cout<<endl;
        switch(Menu)
        {
            case '1':

                RecorreDerecha(arrDatos);
                cout<<"Recorrido exitoso."<<endl<<endl;
                break;

            case '2':

                MuestraDatos(arrDatos);
                cout<<endl<<endl;
                break;

            case '3':
                return 0;

            default:
                cout<<"Error. Seleccione un numero disponible."<<endl;
        }
    }
    return 0;
}
