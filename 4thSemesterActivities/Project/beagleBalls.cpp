#include <iostream>
#include <vector>
using namespace std;

int main() {

  int s, b, data, currSum, currIndex;
  cin>> s >> b;

  vector<int> sums;
  for(int i = 0; i < s; i++)
  {
    cin>>data;
    if(i==0) sums.push_back(data);
    else sums.push_back(sums[i-1]+data);

  }
  // for(int i = 0; i < s; i++)
  // {
  //   cout<<sums[i]<<" ";
  // }
  // cout<<endl;
  currSum=0;
  currIndex=0;
  for(int i = 0; i < b; i++)
  {

    cin>>data;
    currSum+=data;

    while(currIndex<s && currSum>=sums[currIndex]){
      currIndex++;
    }
    if(currIndex==s){
      cout<<s<<endl;
      currIndex=0;
      currSum=0;
    } else {
      cout<<s-currIndex<<endl;
    }
  } 
  return 0;
}