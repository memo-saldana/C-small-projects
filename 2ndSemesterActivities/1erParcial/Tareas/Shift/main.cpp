//Descripcion: Despliega un arreglo de numeros dado por el usuario y recorre los numeros a la derecha, con ayuda de un menu.
//Autor: Jose Guilllermo Saldana Cardenas
//Fecha:11 enero 2018
#include <iostream>

using namespace std;

/*
Esta funcion se utiliza para llenar los datos al arreglo que se utilizara.
Se recibe como parametro el arreglo en el cual se guardaran los datos.
Esta funcion no tiene valor de retorno, ya que es tipo void.
*/
void llenarDatos(int arrDatos[]){

    for(int i=0; i<12; i++){
        cout<<"Ingresa el numero "<<(i+1)<<endl;
        cin>>arrDatos[i];
    }
}

/*
Esta funcion se utiliza para recorrer los numeros de un arreglo hacia la derecha,
y colocar el ultimo valor al principio del arreglo.
Se recibe como parametro el arreglo al cual se le recorreran los numeros.
Esta funcion no tiene valor de retorno, ya que es tipo void.
*/
void recorreDerecha(int arrDatos[]){

    int tmp=arrDatos[11];
    for(int i=11; i>=0; i--){
        arrDatos[i]= arrDatos[i-1];
    }
    arrDatos[0]=tmp;
}



/*
Esta función se utiliza para mostrar los datos del arreglo en su orden y posición actual.
Se recibe como parámetro el arreglo que se mostrarán.
Esta funcion no tiene valor de retorno, ya que es tipo void.
*/
void muestraDatos(int arrDatos[]){

    cout<<"Los números son: ";

    for(int i=0; i<12; i++){
        cout<<arrDatos[i]<<" ";
    }
}
int main(){

    int arrDatos[12];
    char menu;
    llenarDatos(arrDatos);

//Utilizando un while en conjunto con un switch, se despliega un menu de opciones despues de
// llenar los datos, para recorrerlos, desplegarlos, o terminar el programa.
    while(true){

        cout<<endl<<"Seleccione una opción:"<<endl;
        cout<<endl<<"1. Recorre a derecha"<<endl;
        cout<<endl<<"2. Muestra datos"<<endl;
        cout<<endl<<"3. Salir"<<endl;
        cout <<endl<<endl;
        cin>>menu;
        cout<<endl;
        switch(menu){

            case '1':

                recorreDerecha(arrDatos);
                cout<<"Recorrido exitoso."<<endl<<endl;
                break;

            case '2':

                muestraDatos(arrDatos);
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
