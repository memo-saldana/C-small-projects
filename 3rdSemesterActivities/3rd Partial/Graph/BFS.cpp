
#include <iostream>
#include <queue>

using namespace std;
#define N 10

void iniMatAdj(bool matAdj[N][N]){ // Inizialices the matrix as false
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            matAdj[i][j] = false;
        }
    } 
}

void leeMatAdj(bool matAdj[N][N], int e){ //Adds e paths
    int orig, dest;
    for(int i = 1; i <= e; i++){
        cin >> orig >> dest; 
        matAdj[orig - 1][dest - 1] = matAdj[dest - 1][orig - 1] = true; // Since it is not pondered, matrix[i][j] = matrix[j][i]
    }
}

void printMatAdj(bool matAdj[N][N], int v){
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << (matAdj[i][j] ? "T" : "F") << "\t";
        }
        cout << endl;
    }
}

void BFS(bool matAdj[N][N], int v){
    queue<int> fila;
    int dato;
    vector<bool> status(v, false);
    fila.push(0);
    status[0] = true;

    while(!fila.empty()){
        dato = fila.front();
        fila.pop();
        cout << (dato + 1) << " ";

        for(int j=0; j<v; j++){
            if(!status[j] && matAdj[dato][j]){
                status[j] = true;
                fila.push(j);
            }
        }
    }
    cout << endl; 
}
	
int main(){
    bool matAdj[N][N];
    int v, e;
    cin >> v >> e;

    iniMatAdj(matAdj);
    leeMatAdj(matAdj, e);
    printMatAdj(matAdj, v);

    //BFS(matAdj, v);

    return 0;
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