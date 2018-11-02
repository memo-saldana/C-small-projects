#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<int> mySet;
	int n, dato;

	cin>> n;

	for (int i = 0; i < n; ++i)
	{
		cin>>dato;

		mySet.insert(dato);
	}

	cout<<"Dato a buscar: ";
	cin>> dato;
	set<int>::iterator it = mySet.find(dato);
	// if(miset.count(dato)) regresa bool si lo encontro o no	
	
	if (it!= mySet.end()){

		cout<<"Si esta"<<endl;
	
	} else {
		
		cout<<"No esta"<<endl;
	}
	return 0;
}