#include <iostream>
#include <string>
using namespace std;

int main()
{
  string sFrase, stemp="";
  int i;
  bool bFlag=true;
  
  getline(cin,sFrase);
  
  for(i=0;i<(sFrase.length());i++)
  {
    if((int)sFrase[i]>=97 && (int)sFrase[i]<=122 || (int)sFrase[i]>=65 && (int)sFrase[i]<=90)
    {
      stemp+=toupper(sFrase[i]);
    }
  }
  
  
  for(i=0; i<(stemp.length()/2);i++)
  {
   
    if(stemp[i]!=stemp[stemp.length()-1-i])
    {
      cout<<"Not Palindrome";
      return 0;
    }
  }
  
  cout<< "Palindrome"<<endl;
  
  return 0;
}