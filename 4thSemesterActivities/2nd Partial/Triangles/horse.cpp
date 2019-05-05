#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
  int n,m,row,col;
  cin>> n >> m;

  vector<vector<int>> board(n, vector<int>(m,0));
  vector<vector<bool>> visited(n, vector<bool>(m,false));
  queue<pair<int,int>> q;
  q.push( make_pair(0,0));
  board[0][0]=1;

  while(!q.empty()){
    row = q.front().first;
    col = q.front().second;
    q.pop();

    if( row+1<n && col+2<m ){
      board[row+1][col+2]+=board[row][col];

      if(!visited[row+1][col+2]){
        q.push( make_pair(row+1, col+2));
        visited[row+1][col+2] = true;
      }
    }
    if( row+2<n && col+1<m ){
      board[row+2][col+1]+=board[row][col];
      
      if(!visited[row+2][col+1]){
        q.push( make_pair(row+2, col+1));
        visited[row+2][col+1] = true;
      }
    }
  }
  
  cout<<board[n-1][m-1]<<endl;

  

  return 0;
}