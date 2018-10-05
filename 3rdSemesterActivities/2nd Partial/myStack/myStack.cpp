#include <iostream>
using namespace std;
#include "stack.h"

int main()
{
	stack<int> miPila;
	miPila.push(10);
	miPila.push(20);
	miPila.push(30);

	cout<<"El tamano es: "<<miPila.size()<<endl;

	while(!miPila.empty()){
		cout<<miPila.top() << endl;
		miPila.pop();
	}
	return 0;
}