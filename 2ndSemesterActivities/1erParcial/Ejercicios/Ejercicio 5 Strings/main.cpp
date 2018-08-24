#include <iostream>

using namespace std;

int main()
{
    string str;
    int ContarPunto=0;
    bool Prueba=true;
    cout<<"Teclea el numero flotante."<<endl;
    getline(cin, str);

    for(int i=0; i<str.length();i++){
        if(str[i]<48 || str[i]>57){
            if(str[i]!='.'){
                Prueba= false;
            }

        }
        if(str[i]=='.'){
                ContarPunto++;

        }

    }


    if(Prueba&&ContarPunto<2){
        cout<<"Valor valido"<<endl;
    }
    else{
        cout<<"Valor invalido"<<endl;
    }
    return 0;
}
