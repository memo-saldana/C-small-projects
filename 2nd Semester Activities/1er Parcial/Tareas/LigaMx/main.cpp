//Descripción: Este programa se utiliza para contabilizar los partidos jugados, ganados y empatados
// de los equipos de futbol y contar sus puntos obtenidos.
// Nombre: José Guillermo Saldaña    A01039888
// Fecha: 12 febrero 2018
#include <iostream>
//Se utiliza el iomanip para la opcion de mostrar datos, de esta manera se ven ordenadamente.
#include <iomanip>
using namespace std;
//Se incuye la clase.
#include "Equipo.h"

int main()
{

//Se crea un arreglo de equipos, maximo 15. Tambien se crean las variables que se
// utilizaran en el programa.
    Equipo liga[15];
    char op;
    int num,equipos=0,ingresar,i;
    string str;

    do{

//Menu de opciones.
        cout<<"Teclee la letra de la opción deseada:"<<endl;
        cout<<"a. Dar de alta equipo. "<<endl;
        cout<<"b. Modificar patidos jugados. "<<endl;
        cout<<"c. Modificar partidos empatados. "<<endl;
        cout<<"d. Modificar partidos ganados. "<<endl;
        cout<<"e. Ver lista de equipos. "<<endl;
        cout<<"f. Salir. "<<endl;

        cin>>op;

//Switch con las posibles opciones
        switch(op){


//Se ingresa numero de equipos, luego se ingresa uno por uno.
        case 'a':
            cout<<"Cuantos equipos quiere ingresar?"<<endl;
            cin>>ingresar;

//Se valida que el numero que se quiere ingresar no exceda los 15 equipos máximos
            if(equipos+ingresar<16){
                cin.ignore();
                for(i=0;i<ingresar;i++){

                cout<<"Teclea nombre del equipo."<<endl;
                getline(cin, str);
                liga[equipos].setNombre(str);
                cout<<"Equipo guardado."<<endl<<endl;
                equipos++;
                }
            }
            else{
                cout<<"Demasiados equipos. Intente nuevamente."<<endl<<endl;
            }
            break;

        case 'b':
//Se teclea el nombre del equipo para luego ingresar el numero de partidos.
            cout<<"Teclea el nombre del equipo que desea agregar partidos jugados."<<endl;
            cin.ignore();
            getline(cin,str);
            i=0;

//Se busca el indice del equipo que se busca para ingresar los datos en el lugar indicado.
            while(liga[i].getNombre()!=str&&i<15){
                i++;

            }
//Si no se encuentra el nombre se despliega un error y regresa al menu.
            if(i==15){
                    cout<<"Error en el nombre, intente nuevamente."<<endl;
                    break;
            }
            cout<<"El equipo "<<liga[i].getNombre()<<" tiene "<<liga[i].getPJugados()<<" partidos jugados."<<endl<<endl;
            cout<<"Cual es el nuevo numero de partidos jugados?"<<endl;
            cin>>num;

//Se valida que los partidos no tengan un numero negativo.
            if(num<0){
                cout<<"Error en el numero de juegos, intente nuevamente."<<endl<<endl;
            }
            else{
                liga[i].setPJugados(num);
                cout<<"Partidos agregados correctamente."<<endl<<endl;
            }
            break;

        case 'c':

//Igual que los partidos jugados, se busca el nombre y se agrega en el lugar correspondiente.
            cout<<"Teclea el nombre del equipo que desea agregar partidos empatados."<<endl;
            cin.ignore();
            getline(cin,str);
            i=0;
            while(liga[i].getNombre()!=str&&i<15){
                i++;

            }
            if(i==15){
                    cout<<"Error en el nombre, intente nuevamente."<<endl;
                    break;
            }
            cout<<"El equipo "<<liga[i].getNombre()<<" tiene "<<liga[i].getPJugados()<<" juegos jugados."<<endl<<endl;
            cout<<"Cual es el nuevo numero de partidos empatados?"<<endl;
            cin>>num;
//En este caso se valida tambien que el numero de partidos empatados no exceda los jugados menos los ganados.
            if(num<0 || num>(liga[i].getPJugados()-liga[i].getPGanados())){
                cout<<"Error en el numero de juegos, intente nuevamente."<<endl<<endl;
            }
            else{
                liga[i].setPEmpatados(num);
                cout<<"Partidos agregados correctamente."<<endl<<endl;
            }
            break;

        case 'd':
//Igual que los empatados, ahora se guardan en el atrinuto de pGanados
            cout<<"Teclea el nombre del equipo que desea agregar partidos ganados."<<endl;
            cin.ignore();
            getline(cin,str);
            i=0;
            while(liga[i].getNombre()!=str&&i<15){
                i++;

            }
            if(i==15){
                    cout<<"Error en el nombre, intente nuevamente."<<endl;
                    break;
            }
            cout<<"El equipo "<<liga[i].getNombre()<<" tiene "<<liga[i].getPJugados()<<" juegos jugados."<<endl<<endl;
            cout<<"Cual es el nuevo numero de partidos ganados?"<<endl;
            cin>>num;

//Misma condicional que los partidos empatados
            if(num<0 || num>(liga[i].getPJugados()-liga[i].getPEmpatados())){
                cout<<"Error en el numero de juegos, intente nuevamente."<<endl<<endl;
            }
            else{
                liga[i].setPGanados(num);
                cout<<"Partidos agregados correctamente."<<endl<<endl;
            }
            break;

//Opcion para desplegar los equipos con su infromacion
        case 'e':

//Primero se despliegan los titulos de la tabla y luego cada equipo y sus puntos se despliegan por medio de un for loop,
// al final calculando los puntos y mostrandolos en pantalla.
            cout<<"Nombre \t\tJugados     Ganados     Empatados     Puntos"<<endl;
            for(i=0;i<equipos;i++){

//Se utiliza el set width para alinear los nombres de los equipos.
            cout<< i+1 << ". " << setw(10)<< liga[i].getNombre()<<"\t"<<liga[i].getPJugados()<<"\t    "<<liga[i].getPGanados()<<"\t\t"<<liga[i].getPEmpatados()<<"\t\t"<<liga[i].calcularPuntos()<<endl;
            }
        break;

//El caso f termina el programa
        case 'f':
            return 0;
            break;

//Se notifica de error si se ingreso una opcion erronea.
        default:
            cout<<"Opcion inválida."<<endl;

        }

//Condicional del while loop del menu.
    }while(op!='f');

    return 0;
}
