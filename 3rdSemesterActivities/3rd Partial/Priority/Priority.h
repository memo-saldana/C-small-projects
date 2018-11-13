// Jose Guillermo Saldana Cardenas A01039888
// Implementacion de priority queue
#include <vector>

class Priority {
public:
	Priority();
	Priority(bool priority);

	void push(int data);
	void pop();
	int top();
	int size();
	bool empty();
	void print();

private:
	std::vector<int> heap;
	bool priority;
	bool compare(int a, int b);
	void swap(int& a, int& b);
	
};

bool Priority::compare(int a, int b){
	return priority? a>b: a<b;
}
void Priority::swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

Priority::Priority(){
	priority = true;
}

Priority::Priority(bool priority){
	this->priority= priority;
}

void Priority::push(int data){
	
	heap.push_back(data);
	int n = heap.size()-1;
	while(n/2>=0&& compare(heap[n],heap[n/2])){
			swap(heap[n],heap[n/2]);
			n/=2;
	}

}


void Priority::pop(){
	int higher;
	swap(heap[0], heap[heap.size()-1]);
	heap.pop_back();
	
	int n =heap.size()-1;
	
	for(int i=0;i<(heap.size())/2;++i){
		if((i+1)*2<heap.size()-1){
			higher = compare(heap[(i+1)*2-1],heap[(i+1)*2]) ? (i+1)*2-1:(i+1)*2; 
		} else {
			higher = (i+1)*2-1;
		}
		if(compare(heap[higher],heap[i])){
			swap(heap[higher],heap[i]);
		}
	}
}
int Priority::top(){
	if(!heap.empty()){
		return heap[0];
	}
	return -1;
}
int Priority::size(){
	return heap.size();
}
bool Priority::empty(){
	return heap.empty();
}

void Priority::print(){
	for(int i=0;i<heap.size();++i){
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}
