#include <iostream>
#include <string>
using namespace std;

string myToUpper(string sOriginal)
{
  string sNew;
    sNew="";
  for(int i=0; i<sOriginal.length();i++)
  {

    if(sOriginal[i]>=97 && sOriginal[i]<=122)
    {
      sNew+=sOriginal[i]-32;
    }
    else
    {
      sNew+=sOriginal[i];
    }
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

  cout<<"Sentence in upper case is:"<<endl<<sUpper;

  return 0;
}
