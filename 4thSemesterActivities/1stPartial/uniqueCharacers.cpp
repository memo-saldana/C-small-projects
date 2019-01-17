#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  int i=0,d=s.length()-1;
  int m,si,sd;
  m=(i+d)/2;
  while(i<d){
    cout<<"i:"<<i<<endl;
    cout<<"d:"<<d<<endl;
    if(s[m+1]!= s[m] && s[m-1]!=s[m]){
      cout<<s[m]<<endl;
      return 0;
    }
    if(s[m]==s[m+1]){
      cout<<"Dup right"<<endl;
      si=m;
      sd=s.length()-m;
      if(si%2==0){
        cout<<"On right"<<endl;
        i=m+1;
      }else{
        cout<<"On left"<<endl;
        d=m-1;
      }
    } else if(s[m]==s[m-1]){
      cout<<"Dup left"<<endl;
      si=m-1;
      sd=s.length()-1-m;
      if(si%2==0){
        cout<<"On right"<<endl;
        i=m+1;
      } else{
        cout<<"On left"<<endl;
        d=m-1;
      }
    }
    m=(i+d)/2;
  }
  cout<<i<<" "<<d<<endl;
  cout<<s[i]<<endl;
}