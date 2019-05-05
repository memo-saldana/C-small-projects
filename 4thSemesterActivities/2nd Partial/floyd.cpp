#include <iostream>
#include <climits>

using namespace std;

int min(int a, int b){
  return a<b? a: b;
}

void floyd(int D[20][20], int n){
  for(int i=0; i<n; i++){
    for(int j = 0; j < n; j++){
      for(int k = 0; k < n; k++){
        if(D[i][k]!= INT_MAX && D[k][j] != INT_MAX){
          D[i][j] = min(D[i][k]+D[k][j],D[i][j]);
        }
      }
    }
  }
}

int main(){
  int n, m, q, a, b, c;

  int D[20][20];
  
  cin >> n >> m >> q;
  for(int i=0; i<n; i++){
    D[i][i] = 0;
    for(int j = i+1; j < n; j++){
      D[i][j] = D[j][i] = INT_MAX;
    }
  }

  for(int i = 0; i < m; i++){
    cin >> a >> b >> c;
    D[a-1][b-1] = D[b-1][a-1] = c;
  }
  floyd(D,n);
  cout<<"Result"<< endl;
  for(int i=0; i<q ;i++){
    cin >> a >> b;
    cout<< D[a-1][b-1] << endl;
  }  
}