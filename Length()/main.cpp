#include <string>
#include <iostream>
using namespace std;

int length(string str)
{
  int iN;
  for(iN=0;str[iN]!='\0';iN++)
  {
  }
  return iN;
}

int main()
{
  string sName;
  int iLength;
  getline(cin,sName);
  iLength=length(sName);
  cout<<iLength;
  
}
