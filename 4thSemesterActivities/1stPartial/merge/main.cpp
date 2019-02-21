#include <iostream>
#include <vector>

using namespace std;

int contComp=0;

//&function

void Une(vector<int> &d, int ini, int m, int fin){
  int i=ini,j=m+1, k = 0, l=0;
  vector<int> aux;
  while(i<=m && j<=fin){
    contComp++;
    if(d[i]<d[j]){
      aux.push_back(d[i]);
      i++;
    } 
    else{
      aux.push_back(d[j]);
      j++;
    }
  }
  if(i>m){
    while(j<=fin){
      aux.push_back(d[j]);
      j++;
    }
  } 
  else {
    while(i<=m){
      aux.push_back(d[i]);
      i++;
    }
  }
  for(int r = ini; r<=fin; r++){
    d[r] = aux[l];
    l++;
  }
}

void MergeSort(vector<int> &d, int ini, int fin){
  if(ini<fin){
    
    int mit = (ini+fin)/2;
    MergeSort(d,ini,mit);
    MergeSort(d,mit+1,fin);
    Une(d,ini, mit, fin);
  }
}

int main(){
	int n;
  cin >> n;
	vector<int> datos(n);
	for (int i=0; i<n; i++){
		cin>>datos[i];
	}
  MergeSort(datos, 0, n-1);
  cout << contComp<<endl;
	for (int i=0; i<n; i++){
		cout<<datos[i]<< " ";
	
  }
  
}