#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <climits>

using namespace std;
 
#define INF INT_MAX
 



void Dijkstra(int N, vector<int> &Dist, vector<vector<pair<int,int> > > &G) {
  priority_queue<pair <int,int>, vector <pair <int,int>>, greater<pair<int,int> > > Q;
  Dist.assign(N, INF);
  Dist[0] = 0;
  pair<int,int> p(0,0);
  Q.push(p);

  while( !Q.empty() ){
    int u = Q.top().first;
    Q.pop();
    for(int i=0; i<G[u].size(); i++ ){
      pair<int,int> p = G[u][i];
      int v = p.first;
      int w = p.second;
      if(Dist[v]>Dist[u]+w){
        Dist[v] = Dist[u]+w;
        pair<int,int> nvo(v,Dist[v]);
        Q.push(nvo);
      }
    }
  }
}

int main() {
    int N, M, w, t;
    char u, v;

    cin>>t;
    for(int j = 0; j < t; j++){

      cin >> N >> M;
      vector<vector<pair<int,int> > > G(N);
      


      for(int i=0;i<M;++i){
          cin >> u >> v >> w;
          pair<int,int> n1(v-'A',w);
          pair<int,int> n2(u-'A',w);
          G[u-'A'].push_back(n1);
          G[v-'A'].push_back(n2);
      }
      vector<int> Dist;
      Dijkstra(N, Dist, G);
      int max = 0;
      int letter = 0;
      for(int i=1;i<N;i++){
        if(Dist[i] > max){
          max = Dist[i];
          letter = i;
        }
      }

      cout<<"Case "<<j+1<< ": "<< char(letter + 'A')<<endl;
    }
    
    
    return 0;

    
}

/*
5 8
1 2 2
1 3 12
1 4 10
2 3 9
2 5 5
3 4 6
3 5 3
4 5 7
*/