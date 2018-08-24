#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char palabra[11];
    char letra1,letra2;
    cout<<"Teclea una palabra."<<endl;
    cin>>palabra;
    cout<<"Teclea letra 1 y letra 2."<<endl;
    cin>>letra1>>letra2;
    int largo =strlen(palabra);
    for(int i=0;i<largo;i++){
        if(palabra[i]==letra1){
            palabra[i]=letra2;
        }
    }
    cout<<palabra;
    return 0;
}
