#include <iostream>
using namespace std;

int main()
{
  int iRows,iColumns;
  cout<<"Input rows: ";
  cin>>iRows;
  cout<<"Input columns: ";
  cin>>iColumns;

  int iBArray[iRows][iColumns],iCount,iCount2,iSort,iSize=iRows*iColumns,iAux[iSize],iZ=0;

  cout<<"Input array: "<<endl;
  for(iCount=0;iCount<iRows;iCount++)
  {
    for(iCount2=0;iCount2<iColumns;iCount2++)
    {
      cin>>iBArray[iCount][iCount2];
      iAux[iZ]=iBArray[iCount][iCount2];
      iZ++;
    }
  }

 for(iCount = 0; iCount<(iSize-1); iCount++)
  {
    for(iCount2 =0; iCount2<(iSize-iCount-1);iCount2++)
    {
      if(iAux[iCount2]>iAux[iCount2+1])
      {
        iSort=iAux[iCount2];
        iAux[iCount2]=iAux[iCount2+1];
        iAux[iCount2+1]=iSort;
      }

    }
  }

  iZ=0;
  cout<<"Sorted Bidimensional Array is: "<<endl;
  for(iCount=0;iCount<iRows;iCount++)
  {
    for(iCount2=0;iCount2<iColumns;iCount2++)
    {
      iBArray[iCount][iCount2]=iAux[iZ];
      iZ++;

    cout<<iBArray[iCount][iCount2]<<" ";
    }
    cout<<endl;
  }


  return 0;
}
