#include <iostream>
#include <string>
using namespace std;


string myOwnErase(string sOriginal, int iInitial, int iNumberofChars)
{
  string sNew="";
  for(int i=0;i<sOriginal.length();i++)
  {
    if(i<iInitial || i>(iInitial+iNumberofChars))
    {
      sNew+=sOriginal[i];
    }
  }

  return sNew;
}

int main()
{
  string sSentence;
  int iInitial,iAmount;
  getline(cin,sSentence);
  
  cin>>iInitial>>iAmount;
  
  string sErased= myOwnErase(sSentence,iInitial,iAmount);
  
  cout<<sErased<<endl;
}