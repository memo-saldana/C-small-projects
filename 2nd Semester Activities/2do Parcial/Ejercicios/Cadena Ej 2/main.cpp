#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char palabra1[10], palabra3[10], palabra2[10];
    bool pal1=false,pal2=false,pal3=false,pal;
    int j=0;

    cout<<"Teclee la palabra 1"<<endl;
    cin.getline(palabra1,10);
    cout<<"Teclee la palabra 2"<<endl;
    cin.getline(palabra2,10);
    cout<<"Teclee la palabra 3"<<endl;
    cin.getline(palabra3,10);

    if(strcmp(palabra1,palabra2)<0&&strcmp(palabra2,palabra3)<0){

        cout<<palabra1<<endl;
        cout<<palabra2<<endl;
        cout<<palabra3<<endl;
    }
    else if(strcmp(palabra1,palabra2)<0&&strcmp(palabra2,palabra3)>0){
        cout<<palabra1<<endl;
        cout<<palabra3<<endl;
        cout<<palabra2<<endl;
    }
    else if(strcmp(palabra1,palabra2)>0&&strcmp(palabra1,palabra3)<0){
        cout<<palabra2<<endl;
        cout<<palabra1<<endl;
        cout<<palabra3<<endl;
    }
    else if(strcmp(palabra1,palabra2)>0&&strcmp(palabra1,palabra3)>0){
        cout<<palabra2<<endl;
        cout<<palabra3<<endl;
        cout<<palabra1<<endl;
    }
    else if(strcmp(palabra2,palabra3)>0&&strcmp(palabra2,palabra1)<0){
        cout<<palabra3<<endl;
        cout<<palabra2<<endl;
        cout<<palabra1<<endl;
    }
    else if(strcmp(palabra2,palabra3)>0&&strcmp(palabra2,palabra1)>0){
        cout<<palabra2<<endl;
        cout<<palabra1<<endl;
        cout<<palabra3<<endl;
    }



    return 0;
}
