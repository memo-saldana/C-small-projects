//Descripción: Analiza una frase proporcionada por el usuario e identifica
//si se trata de un palindromo o no.
//Autor: José Guilllermo Saldaña Cárdenas
//Fecha:11 enero 2018
#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool pal=true;
    string frase;
    cout<<"Teclea la frase que quieres analizar "<<endl;
    getline(cin, frase);

    //Retiramos los espacion en blanco

    for(int i=0; i<frase.length();i++){
        if(frase[i]== ' '){
            frase.erase(i,1);
        }
    }

    //Recorro la frasae caracter por caracter para ver si converidas
    // a minuscula ambas son iguales o no, en case deque no sean iguales
    //la var. pal la pongo en fale para que se salga del ciclo
    cout<<frase;
    for(int i=0, j=frase.length()-1;i<(frase.length()/2) && pal; i++, j--){

        if(tolower(frase[i])!= tolower(frase[j])){
            pal=false;
    }
    }

    //Analizo el valor de pal para desplegar si se tratade palindromo
    // no

    if(pal){
        cout<<"Si es palindromo.";
    }
    else{
        cout<<"No es palindromo.";
    }
    return 0;
}
