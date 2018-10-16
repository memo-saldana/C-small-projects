#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

#include "BST.h"

int main()
{
	BST miArbol;

	miArbol.add(12);
	miArbol.add(100);
	miArbol.add(45);
	miArbol.add(50);
	miArbol.add(8);
	miArbol.add(10);
	miArbol.add(-5);
	miArbol.add(65);
	miArbol.add(13);

	miArbol.print(1);
	miArbol.print(2);
	miArbol.print(3);

	if(miArbol.search(100)){
		cout<<"Encontro"<<endl;
	} else{
		cout <<" No encontro"<<endl;
	}
	miArbol.printLeaves();

	cout<<endl<<miArbol.count()<<endl;

	cout<<miArbol.height()<<endl;

	miArbol.ancestors(13);

	cout<<endl<<miArbol.whatLevelamI(8);

	cout<<endl;
	miArbol.print(5);

	cout<<endl<<miArbol.nearestRelative(13,65)<<endl;

	cout<<miArbol.maxWidth()<<endl;

	return 0;
}