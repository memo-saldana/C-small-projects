//Descripcion: Analiza una lista de puntos para encontrar los mas cercanos.
//Autor: Jose Guilllermo Saldana Cardenas   A01039888
//Fecha:11 enero 2018
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

/*
La funcion tiene como proposito llenar los datos a la matriz de puntos de un plano.
El parametro que recibe es la matriz en la que se guardaran los numeros.
La funcion no tiene un valor de retorno, ya que es void.
*/
void llenarDatos(double matrizDePuntos[][2]){

    for(int i=0; i<8; i++){

        for(int j=0; j<2; j++){

            if( j == 0 ){

                cout<<"Teclea la x ";
            }
            else{

                cout<<"Teclea la y ";
            }
            cout<<"del punto "<<(i+1)<<endl;
            cin>>matrizDePuntos[i][j];
        }
    }
}

/*
La funcion tiene como proposito calcular las distancias entre cada punto para encontrar
los dos mas cercanos.
El parametro que recibe es la matriz en la que se encuentran las coordenadas de los puntos.
La funcion no tiene un valor de retorno, ya que es void.
*/
void calculaDistancias(double matrizDePuntos[][2]){

//La variable minimo tiene el valor, en metros, de la distancia de mitad de la circunferencia de la Tierra,
// por lo que solamente funcionara si calcula distanicas que no esten fuera del planeta Tierra.
    double resultado, minimo=2035000;
    int punto1, punto2;

    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){

            resultado = sqrt(pow((matrizDePuntos[i][0]-matrizDePuntos[j][0]),2)+pow((matrizDePuntos[i][1]-matrizDePuntos[j][1]),2));

            if(resultado<minimo){

                minimo=resultado;
                punto1=i;
                punto2=j;
            }
        }
    }
    cout<<"El punto ("<< matrizDePuntos[punto1][0] <<","<< matrizDePuntos[punto1][1] << ") y el punto (" << matrizDePuntos[punto2][0]
        <<","<< matrizDePuntos[punto2][1] <<") son los más cercanos, con una distancia de "<< minimo <<endl;
}

int main(){

    double matrizDeDatos[8][2];
    llenarDatos(matrizDeDatos);
    calculaDistancias(matrizDeDatos);

    return 0;
}
