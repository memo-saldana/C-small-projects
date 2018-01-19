#include <iostream>
#include <cmath>
using namespace std;

void baseChanger(int n, int base, string& numero){
    int m=n%base;
    char k;
    if(m<10){
        numero.push_back(m);
    }
    else{
        m+=31;
        k=m;
        numero.push_back(k);

    }
    n/=base;
    if(n>0){
        baseChanger(n,base,numero);
    }
}

int main()
{
    int n,base;
    string numero="";
    cout << "Give me the number" << endl;
    cin>>n;
    cout<< "Give me the base"<<endl;
    cin>>base;
    baseChanger(n,base,numero);
    cout<<endl<<numero;
    return 0;

}
