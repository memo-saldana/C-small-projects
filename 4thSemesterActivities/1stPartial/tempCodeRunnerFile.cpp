#include <iostream>
using namespace std;

int main(){
  string n;
  int size=0;
  cin>>n;

  for(int i=0; i<n.length(); i++){
    if(s[i]=='1'){
      size++;
    }
    if(s[i]=='0'){
      size--;
    }
  }
  return (size<0? size*-1:size);
}