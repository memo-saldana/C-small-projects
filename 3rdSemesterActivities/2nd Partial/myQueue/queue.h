#include "Node.h"

template <class T>
class queue
{
public:
	queue();
	~queue();

	T front();
	void push(T data);
	void pop();
	int size();
	bool empty();

private:
	Node<T> *final;
	int tam;
};

template <class T>
queue<T>::queue(){
	final = NULL;
	tam = 0;
}

template <class T>
queue<T>::~queue(){
	if(final != NULL){
		Node<T> *curr = final->getNext();
		final->setNext(NULL);
		final = curr;
		while(final!= NULL){
			final = final->getNext();
			delete curr;
			curr = final;
		}
	}
}

template <class T>
T queue<T>::front(){
	return final->getNext()->getData();
}

template <class T>
void queue<T>::push(T data){
	if(final == NULL){
		final = new Node<T>(data);
		final -> setNext(final);
	} else {
		final->setNext(new Node<T>(data, final->getNext()));
		final = final->getNext();
	}
	tam++;
}

template <class T>
void queue<T>::pop(){
	Node<T> *curr = final->getNext();
	if(final -> getNext() == final){
		final = NULL;
	} else {
		final->setNext(curr->getNext());
	}
	delete curr;
	tam--;
}

template <class T>
int queue<T>::size(){
	return tam;
}


template <class T>
bool queue<T>::empty(){
	return final == NULL;
}