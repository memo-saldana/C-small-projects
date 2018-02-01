#include <iostream>
#include <string>
using namespace std;
#include "Salon.h"

int main()
{
    string salon;
    int cap,num;
    char op;
    cout<<"Teclea el nombre del salon."<<endl;
    getline(cin,salon);
    cout<<"Teclea la capacidad del salon"<<endl;
    cin>>cap;
    cout<<"Teclea el numero de la  clase."<<endl;
    cin>>num;

    Salon sal(cap,salon,0,num);

    while(op!= 'n'){
        cout<<"Hay "<<sal.getCapacidad()-


    }




    return 0;
}
