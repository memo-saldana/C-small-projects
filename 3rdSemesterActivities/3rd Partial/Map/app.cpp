#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
	map<string, int> myMap;
	int n, edad;
	string nom;
	cin>> n;

	for (int i = 0; i < n; ++i)
	{
		cin>>nom>>edad;
		pair<string,int> myPair(nom,edad);

		myMap.insert(myPair);

	}


	cout<<"Nombre a buscar: "<<endl;

	cin>> nom;

	map<string, int>::iterator it = myMap.find(nom);

	if(it!= myMap.end()){
		cout<< it->second<< endl;
	} else {
		cout<< "No esta"<<endl;
	}


	return 0;
}