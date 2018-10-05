#include <iostream>
#include <stack>
#include <queue>
#include <sstream>
using namespace std;

int stA,stB,quA,quB, pqA, pqB;
stack<int> st;
queue<int> qu;
priority_queue<int,vector<int>,greater<int>> pq;

void getNumbers(){
	stA = st.top();
	st.pop();
	stB = st.top();
	st.pop();

	quA = qu.front();
	qu.pop();
	quB = qu.front();
	qu.pop();

	pqA = pq.top();
	pq.pop();
	pqB = pq.top();
	pq.pop();
}

void sum(){
	st.push(stA + stB);
	qu.push(quA + quB);
	pq.push(pqA + pqB);
}

void subtract(){
	st.push(stB-stA);
	qu.push(quB-quA);
	pq.push(pqB-pqA);
}

void multiply(){
	st.push(stA*stB);
	qu.push(quA*quB);
	pq.push(pqA*pqB);
}


int main(){

	string d,data;

	getline(cin, data);
	while (data != "#"){
		stringstream ss;
	  	ss<< data;
		while (ss >> d){
			if(d != "+" && d != "-" && d != "*" ){
				int n = stoi(d);

				st.push(n);
				qu.push(n);
				pq.push(n);
			} else {

				getNumbers();
				switch(d[0]){
					case '+':
						sum();
					break;

					case '-':
						subtract();
					break;

					case '*':
						multiply();
					break;
				}

			}

		}
			cout<<st.top()<<" "<<qu.front()<<" "<<pq.top()<<endl;
			st.pop();
			qu.pop();
			pq.pop();
	  	getline(cin, data);	
	}
	

	return 0;
}