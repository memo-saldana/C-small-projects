//   José Guillermo Saldaña C. A01039888
// This program asks for 3 numbers  and uses them to do this
// GeneralFormula. To do this, it calls to a function that checks if
// the square root is negative, if it is positive it calculates the
// General formula, if it is negative it tells the user the answer is
// an imaginary number.

#include <iostream>
#include <cmath>
using namespace std;

// The function that checks if the square root is positive, then chooses
// to calculate the general formula or show that the number is imaginary.

void generalFormula(double dA, double dB, double dC)
{
  if (sqrt(pow(dB,2.0)-(4.0*dA*dC)) >= 0)
  {
    double dResult1, dResult2;
    dResult1 = ((-dB)+(sqrt(pow(dB,2.0)-(4.0*dA*dC))))/(2.0*dA);
    dResult2 = ((-dB)-(sqrt(pow(dB,2.0)-(4.0*dA*dC))))/(2.0*dA);

    cout << "The answers are:" << endl << dResult1 << endl;
    cout << dResult2 << endl;

  }
  else
  {
    cout << "Results are imaginary numbers." << endl;
  }
}

// Main function. Asks for the 3 numbers and calls for the generalFormula
// function

int main()
{
  double d1, d2, d3;

  cout << "Enter the values of a, b and c: " << endl;
  cin >> d1 >> d2 >> d3;

  generalFormula(d1, d2, d3);

  return 0;
}
