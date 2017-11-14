#include <iostream>
#include <string>
using namespace std;

string myToUpper(string sOriginal)
{
  string sNew;
    sNew="";
  for(int i=0; i<sOriginal.length();i++)
  {
    
    if((int)sOriginal[i]>=97 && (int)sOriginal[i]<=122)
    {
      sNew+=sOriginal[i]-32;
    }
    else
    {
      sNew[i]+=sOriginal[i];
    }
    cout<<sNew<<endl;
  }
  return sNew;
}

int main()
{
  string sSentence,sUpper;
  sUpper="";
  cout<<"Input sentence: "<<endl;
  
  getline(cin,sSentence);
  
  sUpper= myToUpper(sSentence);
  
  
 
  return 0;
}