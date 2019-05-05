#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* 
2
AAAAAAABBAAB
ABAABBAB
XMJYAUZ
MZJAWXU
 */

int main() {
  int t;
  string s1,s2;
  cin>>t;
  for(int i = 0; i < t; i++)
  {
    cin>>s1>>s2; 
    vector<vector<int>> subs(s1.length()+1, vector<int>(s2.length()+1,0) );
    
    for(int j = 1; j < subs.size(); j++)
    {
      for(int k = 1; k < subs[0].size(); k++)
      {
        if(s1[j-1]==s2[k-1]){
          subs[j][k]= subs[j-1][k-1]+1 ;
        } else {
          subs[j][k] = subs[j-1][k] > subs[j][k-1] ? subs[j-1][k] : subs[j][k-1];
        }

      }
    }
    cout<<"Case "<<i+1<<": "<<subs[s1.size()][s2.size()]<<endl; 
  }
}