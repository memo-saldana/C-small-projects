#include <iostream>
#include <string>
#include <studio.h>
using namespace std;

int main()
{
   char arr[100010];
   int i=0, j=0, ans=1;
   str word;
   strcpy(arr,word.c_str());
   for(i=0;i<100010;i++)
   {
       switch(arr[i])
       {
        case 'A':
            ans*=1;
            break;
        case 'B':
            ans*=2;
            break;
        case 'C':
            ans*=3;
            break;
        case 'D':
            ans*=4;
            break;
        case 'E':
            ans*=5;
            break;
        case 'F':
            ans*=6;
            break;
        case 'G':
            ans*=7;
            break;
        case 'H':
            ans*=8;
            break;
        case 'I':
            ans*=9;
            break;
        case 'J':
            ans*=10;
            break;
        case 'K':
            ans*=11;
            break;
        case 'L':
            ans*=12;
            break;
        case 'M':
            ans*=13;
            break;
        case 'N':
            ans*=14;
            break;
        case 'O':
            ans*=15;
            break;
        case 'P':
            ans*=16;
            break;
        case 'Q':
            ans*=17;
            break;
        case 'R':
            ans*=18;
            break;
        case 'S':
            ans*=19;
            break;
        case 'T':
            ans*=20;
            break;
        case 'U':
            ans*=21;
            break;
        case 'V':
            ans*=22;
            break;
        case 'W':
            ans*=23;
            break;
        case 'X':
            ans*=24;
            break;
        case 'Y':
            ans*=25;
            break;
        case 'Z':
            ans*=26;
            break;
        default:
            ans*=1;

        }
    cout <<ans <<endl;
   }
   ans=ans%26;
   cout << ans;
    return 0;
}

