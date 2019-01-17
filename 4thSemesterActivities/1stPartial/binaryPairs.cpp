#include <iostream>
using namespace std;

int main(){
  string n;
  int size=0,m;
  cin>> m;
  cin>>n;
  for(int i=0; i<m; i++){
    if(n[i]=='1'){
      size++;
    }
    if(n[i]=='0')
      size--;
    }
  }
  cout << (size<0? size*-1:size)<<endl;
}