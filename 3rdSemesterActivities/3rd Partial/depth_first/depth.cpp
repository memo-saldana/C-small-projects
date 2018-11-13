#include <iostream>
#include <vector>
#include <stack>
using namespace std;


void leeListAdj(std::vector<std::vector<int>> &listAdj, int e){
	int a, b;
	for (int i = 0; i < e; ++i)
	{
		cin>>a>>b;
		listAdj[a-1].push_back(b-1);
		listAdj[b-1].push_back(a-1);
	}
}

void DFS(std::vector<std::vector<int>> &listAdj, int v){
	stack <int> pila;
	pila.push(0);
	int data;
	std::vector<bool> status(v,false);
	while(!pila.empty()){
		data = pila.top();
		pila.pop();
		if(!status[data]){
			cout<< data +1 << " ";
			status[data] = true;
			for (int i = listAdj[data].size() -1 ; i >=0; --i){
				if(!status[listAdj[data][i]] ){
					pila.push(listAdj[data][i]);
				}
			}
		}
	}
	cout<<endl;
}

void printListAdj(std::vector<std::vector<int>> &listAdj, int v){
	for (int i = 0; i < listAdj.size(); ++i)
	{
		cout<< i+1 << " ";
		for (int j = 0; j < listAdj[i].size(); ++j)
		{
			cout<<" - "<< listAdj[i][j] + 1;
		}
		cout<<endl;
	}
}

int main(){
	int v, e;
	cin>>v>>e;
	std::vector<std::vector<int>> listAdj(v);
	leeListAdj(listAdj,e);
	printListAdj(listAdj,v);
	DFS(listAdj,v);
}


/*
7 11
1 2
1 3
1 4
2 3  
2 5
3 4
3 5
4 5
4 6
5 7
6 7


7 6
1 2
2 3  
2 5
3 4
4 6
5 7
*/