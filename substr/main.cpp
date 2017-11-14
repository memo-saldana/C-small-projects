#include <iostream>
#include <string>
using namespace std;

string myOwnSubStr(string sOriginal, int iInitial, int iNumber)
{
  string sNew;

  if(sOriginal.length()>=(iInitial+iNumber))
  {
    for(int i=iInitial;iInitial<(iInitial+iNumber);i++)
    {
      sNew+=sOriginal[i];
    }
  }
  else
  {
    cout<<"IF ES FALSO"<<endl;
     return " ";
  }
  cout<<sNew<<endl;
  return sNew;
}

int main()
{
  string str,newstr;
  int iStart,iAmount;
  cout<<"input string"<<endl;
  getline(cin,str);
  cout<<"input start"<<endl;
  cin>>iStart;
  cout<<"input amount"<<endl;
  cin>>iAmount;
  newstr=myOwnSubStr(str,iStart,iAmount);

  cout<<"Substring is "<<newstr<<endl;
  return 0;
}
