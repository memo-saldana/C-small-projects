##include <iostream>
using namespace std;

int main ()
{
  int iDay, iMonth, iYear;
  bool bValid = false;

  cout << "Input the date (DD MM YYYY): " << endl;
  cin >> iDay >> iMonth >> iYear;

  switch (iMonth)
  {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
      if (iDay<=31)
      {
        bValid = true;
      }
      break;

    case 2:
      if (iDay<=29 && iYear%4==0)
      {
       bValid = true;
       }
      if (iDay<=28)
      {
        bValid = true;
      }
      break;

    case 4 :
    case 6 :
    case 9 :
    case 11 :
      if (iDay<=30)
      {
        bValid = true;
      }
      break;

  }
  if (bValid == true)
  {
    cout << "Valid date." << endl;
  }
  else
  {
    cout << "Invalid date." << endl;
  }

  return 0;
}
