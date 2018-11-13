#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void leeListAdj(vector<vector<int> > &listAdj, int e){
	int a, b;
	for (int i=0; i<e; i++){
		cin >> a >> b;
		listAdj[a-1].push_back(b-1);
	}
}

void printListAdj(vector<vector<int> > &listAdj, int e){
	for (int i=0; i<listAdj.size(); i++){
		cout << i << " ";
		for (int j=0; j< listAdj[i].size(); j++){
			cout << " - " << listAdj[i][j];
		}
		cout << endl;
	}
}

bool isTree(vector<vector<int> > &listAdj, int v, int e){
	if( e != v-1){
		return false;
	}
	int cantidadVist = 1;
	vector<bool> visit(v,false);
	stack<int> miPila;
	miPila.push(0);
	visit[0]=true;
	int dato;	
	while(!miPila.empty()){
		dato = miPila.top();
		miPila.pop();
		for( int i=listAdj[dato].size()-1; i>=0; --i){
			if(visit[listAdj[dato][i]]){
				return false;
			}
			miPila.push(listAdj[dato][i]);
			visit[listAdj[dato][i]] = true;
			cantidadVist++;
		}
	}
	cout<<v<<endl;
	return (cantidadVist == v);
}

int main(){

	int v, e;
	cin >> v >> e;
	vector<vector<int> > listAdj(v);
	leeListAdj(listAdj, e);
//	printListAdj(listAdj, v);
	cout << (isTree(listAdj, v, e)? "YES" : "NO") << endl;
	return 0;
}