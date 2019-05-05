  #include <iostream>
  #include <vector>
  #include <climits>
  using namespace std;

  int multMat(vector<int> d){
    int n = d.size();

    vector<vector<int>>  D(n, vector<int>(n));
    int j, min, act;

    for(int i=0; i<n; i++){
      D[i][i] = 0;
    }

    for(int diag=1; diag<=n-1; diag++){
      for(int i=0; i< (n-diag); i++){
        j = i + diag;
        // cout<<"j:"<<j<<endl;
        D[i][j] = INT_MAX;
        // cout<< "Diff:" <<d[j+1]-d[i]<<endl;

        for(int k = i; k<j; k++){
          act = D[i][k] + D[k+1][j];
          D[i][j] = (D[i][j]>act)? act: D[i][j];
        }
        D[i][j]+= d[j+1] - d[i];
      }
    }
    // cout<< " Size: "<<n<<endl;
    // for(int i=0; i<n; i++){
    //   for(int j=0; j<n; j++){
    //     if(i<=j){
    //       cout<<D[i][j]<< " ";
    //     }
    //   }
    //   cout<<endl;
    // }
    return  D[0][n-2];
  }

  int main() {
    int n,num,t=1;

    while(t != 0){
      cin>>t;
      if(t==0){
        return 0;
      }
      cin>>n;
      vector<int> d;
      d.push_back(0);
      for(int i=0; i<n; i++){
        cin>> num;
        d.push_back(num);
      }
      d.push_back(t);
      int res = multMat(d);

      // for(int i = 0; i < d.size(); i++)
      // {
      //   cout<<d[i]<<" ";
      // }
      // cout<<endl;
      
      cout<<"The minimum cutting is "<<res<<"."<<endl;
    }
  }