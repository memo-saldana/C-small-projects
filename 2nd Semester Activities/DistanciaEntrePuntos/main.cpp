#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void LlenarDatos(double MatrizDePuntos[][])
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(j==0)
            {
                cout<<"Teclea la x ";
            }
            else
            {
                cout<<"Teclea la y ";
            }
            cout<<"del punto "<<(i+1);
            cin>>MatrizDePuntos[i][j];
        }
    }
}

double CalculaDistancias(double MatrizDePuntos[][])
{
    double Resultado,Minimo=100000;
    int Punto1, Punto2;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j++)
        {
            Resultado= sqrt(pow((MatrizDePuntos[i][0]-MatrizDePuntos[j][0]),2)+pow((MatrizDePuntos[i][1]-MatrizDePuntos[j][1]),2));
            if(Resultado<Minimo)
            {
                Punto1=i;
                Punto2=j
            }
        }
    }


    cout<<"El punto ("<<MatrizDePuntos[Punto1][0]<<","<<MatrizDePuntos[Punto1][1]<<") y el punto ("<<MatrizDePuntos[Punto1][0]<<","<<MatrizDePuntos[Punto1][1]<<") son los más cercanos."<<endl;
}

int main()
{
    double MatrizDeDatos[8][2];
    LlenarDatos(MatrizDeDatos[8][2]);
    CalculaDistancias(MatrizDeDatos[8][2]);
}
