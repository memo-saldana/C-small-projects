// José Guillermo Saldaña Cárdenas A01039888
//  Algoritmo de Strassen 

// si lo alcance a corregir jeje

#include <iostream>
#include <vector>
using namespace std;
int multCount=0;

void mult(vector<vector<long int>> a, vector<vector<long int>> b,  vector<vector<long int>> &c){
  int n = c.size();
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      for(int k = 0; k < n; k++)
      {
        // c[i][j] += a[i][k]*b[k][j];
        c[i][k] += a[i][j] * b[j][k];
        multCount++;
      } 
    } 
  }
}


vector<vector<long int>> sum(vector<vector<long int>> a, vector<vector<long int>> b){
  int n = a.size();
  vector<vector<long int>> c(n,vector<long int>(n));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  return c;
}

vector<vector<long int>> sub(vector<vector<long int>> a, vector<vector<long int>> b){
  int n = a.size();
  vector<vector<long int>> c(n,vector<long int>(n));
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
    }
  }
  return c;
}

void copy(vector<vector<long int>> &into, vector<vector<long int>> from, int colShift, int rowShift ){
  
  for(int i = 0; i < into.size() && i < from.size() ; i++)
  {
    for(int j = 0; j < into[0].size() && i < from[0].size(); j++)
    {
      into[i][j] = from[rowShift+i][colShift+j];
    } 
  }
  
}

void copyC(vector<vector<long int>> &into, vector<vector<long int>> from, int colShift, int rowShift ){
  
  for(int i = 0; i < from.size() ; i++)
  {
    for(int j = 0; j < from[0].size(); j++)
    {
      into[i+rowShift][j+colShift] = from[i][j];
    } 
  }
  
}

void printMat(vector<vector<long int>> C){
  int n = C.size();
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  }
  
}
void strassen( vector<vector<long int>> &A, vector<vector<long int>> &B,  vector<vector<long int>> &C){
  // Si es 2x2, hacer tradicional
  int n = A.size();
  if(n==2){
    mult(A,B,C);
    return;
  }
  int m = n/2;

  vector<vector<long int>> a(m,vector<long int>(m)), 
                      b(m,vector<long int>(m)), 
                      c(m,vector<long int>(m)), 
                      d(m,vector<long int>(m)), 
                      e(m,vector<long int>(m)), 
                      f(m,vector<long int>(m)), 
                      g(m,vector<long int>(m)), 
                      h(m,vector<long int>(m)),
                      m1(m,vector<long int>(m)), 
                      m2(m,vector<long int>(m)), 
                      m3(m,vector<long int>(m)), 
                      m4(m,vector<long int>(m)), 
                      m5(m,vector<long int>(m)), 
                      m6(m,vector<long int>(m)), 
                      m7(m,vector<long int>(m)),
                      c1(m,vector<long int>(m)), 
                      c2(m,vector<long int>(m)), 
                      c3(m,vector<long int>(m)), 
                      c4(m,vector<long int>(m));

  // A
  copy(a,A,0,0);
  copy(b,A,m,0);
  copy(c,A,0,m);
  copy(d,A,m,m);

  // B
  copy(e,B,0,0);
  copy(f,B,m,0);
  copy(g,B,0,m);
  copy(h,B,m,m);

  // Ms
  mult(a, sub(f,h), m1);
  mult(sum(a,b), h, m2); 
  mult(sum(c,d), e, m3);
  mult(d, sub(g,e), m4); 
  mult(sum(a,d), sum(e,h), m5);
  mult(sub(b,d), sum(g,h), m6); 
  mult(sub(a,c), sum(e,f), m7);

  // Cuadrantes de C
  c1 = sum (sub( sum(m5,m4) , m2 ) , m6); 
  c2 = sum(m1,m2);
  c3 = sum(m3,m4);
  c4 = sub(sub(sum(m1,m5), m3), m7);

  // Pasar todo a C
  copyC(C,c1 ,0,0);
  copyC(C, c2, m, 0);
  copyC(C, c3, 0, m);
  copyC(C, c4 , m,m);

  
  return;
  

}

int main(){
  int n;
  int data;
  cin>>n;
  vector<vector<long int>> A, B, C(n,vector<long int>(n));
  for(int i = 0; i < n; i++)
  {
    A.push_back(vector<long int>());
    for(int j = 0; j < n; j++)
    {
      cin>>data;
      A[i].push_back(data);
    }
  }
  for(int i = 0; i < n; i++)
  {
    B.push_back(vector<long int>());
    for(int j = 0; j < n; j++)
    {
      cin>>data;
      B[i].push_back(data);
    }
  }
  strassen(A,B,C);
  cout<<"Traditional Scalar Multiplications: "<<n*n*n<<endl;
  cout<<"Strassen Scalar Multiplications: "<<multCount<<endl;

  cout<<"Result: "<<endl;
  printMat(C);



  return 0;
}

/*
Test cases

8
1 2 3 4 5 6 7 8 
9 10 11 12 13 14 15 16 
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
1 2 3 4 5 6 7 8 
9 10 11 12 13 14 15 16 
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
1 0 0 0 0 0 0 0
0 1 0 0 0 0 0 0
0 0 1 0 0 0 0 0
0 0 0 1 0 0 0 0
0 0 0 0 1 0 0 0
0 0 0 0 0 1 0 0
0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 1

4
1 2 3 4 
5 6 7 8 
9 10 11 12
13 14 15 16
1 0 0 0 
0 1 0 0
0 0 1 0
0 0 0 1

2
1 2 
3 4
1 0
0 1

*/