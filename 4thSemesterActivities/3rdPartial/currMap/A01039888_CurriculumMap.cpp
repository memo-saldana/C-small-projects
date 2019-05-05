#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <stack>
using namespace std;

bool anyTime(vector<vector<int>> requires, int curr){
  int data;
  for(int i=0; i<requires[curr].size(); i++){
    stack<int> s;
    s.push(requires[curr][i]);
    vector<bool> visited(requires.size(), false);

    while(!s.empty()){
      data = s.top();
      s.pop();
      if(visited[data] && requires[data].size()!=0){
        return false;
      }
      visited[data] = true;
      for(int j = requires[data].size()-1; j>=0; j-- ){
        s.push(requires[data][j]);
      }
    }

  }
  return true;
  
}

int main() {
  int n, c, a,b;
  string subj, dest;
  cin>> n >> c;
  unordered_map<string,int> names;
  vector<vector<int>> adj(n);
  // input de nodos
  for(int i = 0; i<n; i++){
    cin>>subj;
    names[subj] = i;
  }
  // input de flechas
  for(int i=0 ; i<c; i++){
    cin>> subj >> dest;
    a = names[subj];
    b = names[dest];
    adj[b].push_back(a);

  }

  
  for(int i = 0; i < n; i++){
    if(!anyTime(adj, i)){
      cout<<"INCORRECT"<<endl;
      return 0;
    }
  }

  cout<<"CORRECT"<<endl;
  
  return 0;
}
/* 

4 3
MATH1
MATH2
PHYSICS1
PHYSICS3
MATH1 MATH2
MATH2 PHYSICS3
PHYSICS1 PHYSICS3

4 4
MATH1
MATH2
PHYSICS1
PHYSICS3
MATH1 MATH2
MATH2 PHYSICS1
PHYSICS1 PHYSICS3
PHYSICS3 MATH2
 */