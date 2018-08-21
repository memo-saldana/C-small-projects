#include "Node.h"

template <class T>
class LinkedList{
public:
	LinkedList();
	~LinkedList();
	void addFirst(T data);
	bool isEmpty();
	void addLast();
	void deleteFirst();

private:
	Node<T> *head;
	int size;
};

template <class T>
LinkedList<T>::LinkedList(){
	head = NULL;
	size = 0;
}

template <class T>
void LinkedList<T>::addFirst(T data){
	head = new Node<T>(data,head);
	size++;
}

template <class T>
bool LinkedList<T>::isEmpty(){
	return (head == NULL);
	// (size == 0)
}

template <class T>
void LinkedList<T>::deleteFirst(){
	if(!isEmpty()){
		Node<T> *curr = head;
		head = head->getNext();
		delete curr;
		size--;
	}
}

template <class T>
void LinkedList<T>::addLast(T data){
	if(this->isEmpty()){
		addFirst(data);
	}
	else {
		Node<T> *curr = head;
		while( curr ->getNext() != NULL){
			curr = curr ->getNext();
		}
		curr->setNext(new Node<T>(data));
		size++;
	}
}



