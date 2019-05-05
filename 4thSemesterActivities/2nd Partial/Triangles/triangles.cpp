#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t,n,d;
  cin>> t;

  for(int T=0;T<t; T++){
    cin>>n;
    vector<vector<int>> data(n);
    
    for(int i=0;i<n; i++){
      for(int j = 0; j<i+1; j++){
        cin>>d;
        
        data[i].push_back(d);
      }
    }
    

    for(int i=(n-2); i>=0; i--){
      
      for(int j = 0; j<data[i].size(); j++){
        int max = data[i+1][j]>data[i+1][j+1] ? data[i+1][j] : data[i+1][j+1];
        data[i][j]+= max;
      }
    }

    cout<<data[0][0]<<endl;
  }

}