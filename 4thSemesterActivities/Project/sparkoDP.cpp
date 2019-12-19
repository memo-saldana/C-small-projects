#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void TSP( vector<vector<int>> ady, vector<bool> visited, int nivel, int act, int acum, int &costo ){
  visited[act] = true;

  // si se completo un ciclo hamiltoneano,
  if(nivel == ady.size() && ady[act][0] != INT_MAX){
    // acumular el trayecto de vuelta al inicio,
    acum += ady[act][0];
    // y ver si el costo del ciclo es menor al actual
    costo = acum < costo ? acum : costo;
  } else {
    for(int i = 0; i < ady.size(); i++)
    {
      if(!visited[i] && ady[act][i] != INT_MAX){
        TSP(ady, visited, nivel+1, i, acum+ady[act][i], costo);
      }
    }
    
  }
}


int main() {
  int n, m, data, res = INT_MAX;
  char a, b;
  cin>>n>>m;

  vector<vector<int>> ady(n,vector<int>(n, INT_MAX));
  vector<bool> visited(n, false);
  for(int i = 0; i < n; i++)
  {
    ady[i][i] = 0;
  }

  for(int i = 0; i < m; i++)
  {
    cin>>a>>b>>data;
    ady[a-'A'][b-'A'] = data;
    ady[b-'A'][a-'A'] = data;

    
  }
  
  // for(int i = 0; i < n; i++)
  // {
  //   for(int j = 0; j < n; j++)
  //   {
  //     if(ady[i][j] == INT_MAX){
  //       cout<<"MAX ";
  //     } else {
  //       cout<<ady[i][j]<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }
  TSP(ady,visited, 1, 0, 0, res);
  if(res==INT_MAX){
    cout<<"INF"<<endl;
  } else {
    cout<<res <<endl;
  }

}