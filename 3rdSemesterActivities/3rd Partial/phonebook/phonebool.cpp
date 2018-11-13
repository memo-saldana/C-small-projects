#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	int n,number;
	string action,name;
	unordered_map<int,string> um;
	cin>> n;

	for(int i=0;i<n; ++i){
		cin>>action;
		if(action=="add"){
			cin>>number>>name;
			um[number]=name;			
		}

		else if(action == "find"){
			cin>>number;
			if(um.find(number)==um.end()){
				cout<<"not found"<<endl;
			} else {
				cout<< um[number]<<endl;
			}
		} else if(action=="del"){
			cin>>number;
			um.erase(number);
		}
	}
	

	return 0;
}