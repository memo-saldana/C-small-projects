#include <iostream>
using namespace std;
#include "queue.h"

int main()
{
	queue<int> miFila;
	miFila.push(10);
	miFila.push(20);
	miFila.push(30);

	cout<<"El tamano es: "<<miFila.size()<<endl;

	while(!miFila.empty()){
		cout<<miFila.front() << endl;
		miFila.pop();
	}
	return 0;
}