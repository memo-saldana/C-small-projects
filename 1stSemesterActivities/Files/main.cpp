#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // READ/WRITE OF FILES:
    // ofstream =cout
    // ifstream =cin

    //OPEN FILE:
    //oFile.open("text.txt");
/*
    To write:
    ofstream ofFile;
    int iX,iLim;
    ofFile.open("text.txt");
    cin>>iLim;
    for(iX=0;iX<iLim;iX++)
    {
        ofFile<<iX<<endl;

    }
    ofFile.close();
 */

    // To read:
    int iX;
    ifstream ifFile;
    ifFile.open("text.txt");
    while(ifFile>>iX)
    {
        cout<<iX<<endl;
    }
    ifFile.close();


    return 0;
}
