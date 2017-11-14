#include <iostream>
using namespace std;

void doFibonacciSeq(int iLength)
{
  int iF1, iF2, iFn, iCount;
  iF2 = 1;
  iFn = 0;

  cout << "The sequence is: ";
  for(iCount = 1; iCount <= iLength; iCount++)
  {
    cout << iFn << " ";
    iF1 = iF2;
    iF2 = iFn;
    iFn = iF1 + iF2;
  }
}

int main()
{
  int iLength, iCount;

  cout << "Input length of sequence: ";
  iCount = 0;
  while(iCount<1)
  {
    cin >> iLength;
    cout << endl;
    if(iLength>0)
    {
      iCount++;
      doFibonacciSeq(iLength);
    }
    else
    {
      cout << "Invalid number, try again. " << endl;
    }
  }


  return 0;
}
