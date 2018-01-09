#include <iostream>
#include <string>
using namespace std;

int main()
{
  string sFrase;
  int iAlfa=0, iNum=0, iChar=0;
  getline(cin,sFrase);
  for(int i=0; i<sFrase.length();i++)
  {
    if((int)sFrase[i]>=97 && (int)sFrase[i]<=122 || (int)sFrase[i]>=65 &&(int)sFrase[i]<=90)
    {
      iAlfa++;
    }
    else if((int)sFrase[i]>=48 &&(int)sFrase[i]<=57)
    {
      iNum++;
    }
    else
    {
      iChar++;
    }
  }
  cout<<"Alphabet: "<<iAlfa<<endl;
  cout<<"Digits: "<<iNum<<endl;
  cout<<"Special chars: "<<iChar<<endl;

  
  return 0;
}