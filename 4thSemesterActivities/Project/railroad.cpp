#include <iostream> 
#include <vector>

using namespace std;

int main() {
  int n, m, data;

  do{
    cin>> m >> n;
    if( m== 0 && n == 0){
      return 0;
    }
    vector<int> a, b, orden;
    bool M[m+1][n+1];
    M[0][0]=true;
    for(int i = 0; i < m; i++)
    {
      cin>>data;
      a.push_back(data);
    }
    for(int i = 0; i < n; i++)
    {
      cin>>data;
      b.push_back(data);
    }
    for(int i = 0; i < n+m; i++)
    {
      cin>>data;
      orden.push_back(data);
    }
    bool found = false;
    for(int i=1; i<=m; i++){
      if(!found){
        M[i][0] = a[i-1] == orden[i-1];
        found = !M[i][0];
      }
    }
    found = false;
    for(int i=1; i<=n; i++){
      if(!found){
        M[0][i] = b[i-1] == orden[i-1];
        found = !M[0][i];
      }
    }
    for(int i = 1; i <= m; i++)
    {
      for(int j = 1; j <= n; j++)
      {
        M[i][j] = orden[i+j-1] == a[i-1] && M[i-1][j] || orden[i+j-1] == b[j-1] && M[i][j-1];
      }
    }
    // for(int i = 0; i <= m; i++)
    // {
    //   for(int j = 0; j <= n; j++)
    //   {
    //     cout<<M[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
    
    if(M[m][n]){
      cout<<"possible"<<endl;
    } else {
      cout<<"not possible"<<endl;
    }

  }while(m!=0 && n!=0);


  return 0;
}