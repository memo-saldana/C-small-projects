#include <iostream>
// Robot
// Matricula: A01039888
// Nombre: José Guillermo Saldaña Cárdenas

using namespace std;
#define MAX 100

int robot(int mat[MAX][MAX], int n, int m){
  
  for( int i = 1; i< n ; i++){
    mat[i][0] += mat[i-1][0];
  }
  
  for( int i = 1; i< m ; i++){
    mat[0][i] += mat[0][i-1];
  }

  for(int i = 1; i < n; i++)
  {
    for(int j = 1; j < m; j++)
    {
      mat[i][j]+= mat[i-1][j] < mat[i][j-1] ? mat[i-1][j] : mat[i][j-1];
    }
  }
  

	return mat[n-1][m-1];
}

void print(int mat[MAX][MAX], int n, int m){
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
		 cout << mat[i][j]<< " ";
		}
		cout << endl;
	}	
}

int main(){
	int n, m;
	int mat[MAX][MAX];
	cin >> n  >> m;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> mat[i][j];
		}
	}
	cout << robot(mat, n, m)<<endl;
	// print(mat, n, m);
}