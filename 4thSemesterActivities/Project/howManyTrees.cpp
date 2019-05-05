#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long binomial(long long n, long long k){
  vector<vector<long long>> B(n+1, vector<long long>(n+1));
  for(long long i = 0; i <= n; i++){
    for(long long j = 0; j <= min(i,k); j++){
      if(j==0 || j==i){
        B[i][j] = 1;
      } else {
        B[i][j] = B[i-1][j-1] + B[i-1][j];
      }
    }
  }
  return B[n][k];
}


long long catalan(long long c){
  return binomial(2*c, c)/(c+1);
}

int main(){
  long long n;
  cin>>n;

  cout<<catalan(n)<<" BTrees"<<endl;

  return 0;
}