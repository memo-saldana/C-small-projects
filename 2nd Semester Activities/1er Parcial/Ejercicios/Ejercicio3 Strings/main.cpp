#include <iostream>

using namespace std;

int main(){
    string str, newstr='';
    cout<<"Teclea frase"<<endl;

    getline(cin, str);

    for(int i=str.length()-1;i>0;i--){
        if(str[i]==' '){
            newstr[i]+=substr(i);
            str.erase(i);
            i=0;g
        }
    }


    return 0;
}
