#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define N 10
bool include[N];
vector<int> obj;
int VALOR, n;

void sum_of_subsets(int i, int acum, int total){
  if(acum+total>=VALOR && (acum == VALOR || acum+obj[i+1] <= VALOR)){
    if(acum==VALOR){
      for(int k=0; k<n; k++){
        if(include[k]){
          cout<<obj[k]<< " ";
        }
      }
      cout<<endl;
    } else {
      include[i+1] = true;
      sum_of_subsets(i+1, acum+obj[i+1], total-obj[i+1]);
      include[i+1] = false;
      sum_of_subsets(i+1,acum,total-obj[i+1]);
    }
  }
}



int main() {
  cin >> n;

  int dato, total=0;
  for(int i=0; i<n; i++){
    cin>> dato; 
    obj.push_back(dato);
    total+=dato;
  }
  sort(obj.begin(), obj.end() );

  // for(int i=0; i<n; i++){
  //   cout<< obj[i] <<" ";

  // }
  // cout<<endl;

  cin>>VALOR;
  sum_of_subsets(-1,0,total);

  return 0;
}