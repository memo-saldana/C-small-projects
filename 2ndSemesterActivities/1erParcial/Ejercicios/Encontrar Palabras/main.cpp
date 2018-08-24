#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int i;
    ifstream ArchPalabras,ArchTexto;
    ArchPalabras.open("Palabras.txt");
    ArchTexto.open("Texto.txt");
    string Palabras[10];
    for(i=0;i<10;i++){
        Palabras[i]="";
    }
    i=0;
    while(!ArchPalabras.eof()){
        ArchPalabras>>Palabras[i];
        i++;
    }
    i=0;
    while(Palabras[i]!=""){
        cout<<Palabras[i]<<endl;
            i++;
    }







    ArchPalabras.close();
    ArchTexto.close();
    return 0;
}
