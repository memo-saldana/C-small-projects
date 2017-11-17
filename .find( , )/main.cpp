#include <string>
#include <iostream>
using namespace std;

int find(string str,char ch)
{
  int i;
  for(i=0;i<str.length();i++)
  {
    if(str[i]==ch)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  string sName;
  int iN;
  char cLetter;
  cout<<"Input phrase. "<<endl;
  getline(cin,sName);
  cout<<"Input letter to find. "<<endl;
  cin>>cLetter;
  iN= find(sName,cLetter);
  
  cout<<iN<<endl;
}