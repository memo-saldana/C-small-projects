/*
  Matricula: A01039888
  Nombre: José Guillermo Saldaña Cárdenas
*/

#include <iostream>
#include <vector>

using namespace std;

string juego(vector<int> &d){
  int maxChanges= 0;
  int max = d[0];
  // for takes n time, n being the size of d
  for(int i = 1; i<d.size(); ++i ){ // d.size() is constant
    if(max < d[i]){ //d[i] is constant
      maxChanges++;
      max = d[i];
    }
  } 
  if(maxChanges % 2 == 0){
	  return "BETO";
  } else {
    return "PEPE";
  }

}

int main(){
	int n;
	cin >> n;
	vector<int> datos(n);
	for (int i=0; i<n; i++){
		cin>>datos[i];
	}
  cout << juego(datos)<<endl;
}

/*
Ejemplo 1
4
1 2 4 3

Ejemplo 2
4
1 4 3 2

Ejemplo 3
6
8 10 5 12 13 9

*/