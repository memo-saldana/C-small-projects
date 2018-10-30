#include <iostream>
using namespace std;
#include "Priority.h"


int main(){

	Priority p(false);
	
	cout<<p.top()<<endl;
	if(p.empty()){
		cout<<"empt"<<endl;
	}	
	p.push(10);
	p.print();
	p.push(5);
	p.print();
	p.push(7);
	p.print();
	p.push(9);
	p.print();
	p.push(8);
	p.print();
	p.push(15);
	p.print();
	cout<<p.top()<<endl;
	p.pop();
	p.print();
	cout<<p.top()<<endl;
	p.pop();
	p.print();
	cout<<p.top()<<endl;
	if(p.empty()){
		cout<<"empt"<<endl;
	}

	return 0;
}