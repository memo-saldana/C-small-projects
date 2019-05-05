#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 1 2 / 3 4

float getMedian(float arr[], int l, int r){
  int n = r-l+1;

  if(n%2 == 0 ){
    return (arr[(l+r)/2] + arr[((l+r)/2)+1])/2;
  } else {
    return arr[(l+r)/2];
  }
}

float median(float arr1[], float arr2[], int l1,  int r1, int l2, int r2){
  // char buff;
  // cout<< "Size: "<<r1-l1+1<<endl;
  // cout<<"Left1: "<<l1<<endl;
  // cout<<"Right1: " <<r1<<endl;
  // cout<<"Left2: "<<l2<<endl;
  // cout<<"Right2: " <<r2<<endl;


  if((r1-l1+1)==1){
    // cout<<"done"<<endl;
    // cout<< arr1[l1]<<" " << arr2[l2]<<endl;
    return (arr1[l1] + arr2[l2])/2;
  }
  float left = getMedian(arr1, l1, r1);
  float right = getMedian( arr2, l2, r2);

  // cout<< "Left "<<left<<endl; 
  // cout<< "Right "<<right<<endl<<endl;
  // cin>>buff;

  if(left==right){
    return left;
  }
  if(left<right){
    return median(arr1, arr2, (ceil((l1+r1)/2.0)) , r1, l2, (floor((l2+r2)/2.0)));
  } else {
    return median(arr1, arr2, l1, (floor((l1+r1)/2.0)), (ceil((l2+r2)/2.0)), r2);
  }

}


int main(){
  int t,n;
  cout << fixed;
  cout << setprecision(2);
  cin>>t;

  for(int i=0; i<t; i++){
    cin>>n;
    float arr1[n], arr2[n];
    for(int j=0; j<n;j++){
      cin>>arr1[j];
    }
    for(int j=0; j<n;j++){
      cin>>arr2[j];
    }
    float x =median(arr1,arr2,0, n-1, 0, n-1);
    cout<<"Median case "<<i+1<<": "<< x <<endl;
  }
}