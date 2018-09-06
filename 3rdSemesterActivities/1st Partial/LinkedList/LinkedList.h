#include "Node.h"

template <class T>
class LinkedList{
public:
	LinkedList();
	LinkedList(const LinkedList<T> &LL);
	~LinkedList();
	void addFirst(T data);
	bool isEmpty();
	void addLast(T data);
	void deleteFirst();
	void deleteLast();
	int getSize();
	bool add(T data, int pos);
	void del(int pos);
	int deleteAll();


	T get(int pos);
	T set(T data, int pos);
	bool change(int one, int two);
	void print();
	
	void reverse();
	bool operator == (const LinkedList<T> &LL);
	void operator += (T data);
	void operator += (const LinkedList<T> &LL);
	void operator = (const LinkedList<T> &LL);

private:
	void deleter();
	Node<T> *head;
	int size;
};

template <class T>
LinkedList<T>::LinkedList(){
	head = NULL;
	size = 0;
}

template <class T>
LinkedList<T>::~LinkedList(){
	deleter();
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

template <class T>
void LinkedList<T>::deleteLast(){
	if (size <=1 )
	{
		deleteFirst();
	} else {
		Node<T> *curr = head;
		while ( curr->getNext() ->getNext() != NULL){
			curr = curr ->getNext();
		}
		delete curr->getNext();
		curr->setNext(NULL);
		size--;
	}
}

template <class T>
void LinkedList<T>::deleter(){
	Node<T> *curr=head;
	while(!this->isEmpty()){
		head = head->getNext();
		delete curr;
		curr =head;
	}
	size=0;
}

template <class T>
int LinkedList<T>::getSize(){
	return size;
}

template <class T>
bool LinkedList<T>::add(T data, int pos){
	if(pos> size){
		return false;
	}
	if( pos == 0){
		addFirst(data);
	} else if( pos == size) {
		addLast(data);
	} else {
		Node<T> *curr = head;
		for (int i = 1; i < pos; ++i)
		{
			curr = curr->getNext();
		}
		curr->setNext(new Node<T>(data, curr->getNext()));
		size++;
	}
}

template <class T>
void LinkedList<T>::del(int pos){
	if(pos==0){
		deleteFirst();
	} else if( pos == size-1) {
		deleteLast();
	} else {
		Node<T> *curr = head;
		for (int i = 0; i < pos; ++i)
		{
			curr = curr->getNext();
		}
		Node<T> *temp = curr->getNext();
		curr->setNext(temp->getNext());
		delete temp;
		size--;
	}
}

template <class T>
int LinkedList<T>::deleteAll(){
	int cant = size;
	deleter();
	return cant;
}

template <class T>
T LinkedList<T>::get(int pos){
	Node<T> *curr = head;
	if(pos>size){
		return NULL;
	} else {
		for (int i = 0; i < pos; ++i){
			curr= curr->getNext();
		}
		return curr->getData();
	}
}

template <class T>
T LinkedList<T>::set(T data, int pos){
	Node<T> *curr = head;
	for (int i = 0; i < pos; ++i)
	{
		curr = curr->getNext();
	}
	T result = curr->getData();
	curr->setData(data);
	return result;
}

template <class T>
bool LinkedList<T>::change(int one, int two){
	if(one >size || two>size || one <0|| two <0)  {
		return false;
	}
	if (one == two){
		return true;
	}
	int posMen = (one<two ? one : two);
	int posMay = (one>two ? one : two);

	Node<T> *first = head;
	for (int i =1; i <= posMen; ++i)
	{
		first = first->getNext();
	}
	Node<T>* second = first;
	for (int i=posMen; i < two; ++i)
	{
		second = second->getNext();
	}

	T temp = first->getData();
	first->setData(second->getData());
	second->setData(temp);

	return true;
}

template <class T>
void LinkedList<T>::print(){
	Node<T> *curr = head;
	while(curr != NULL) {
		cout<< curr->getData() << " ";
		curr = curr->getNext();
	}
	cout<<endl;
}

template <class T>
void LinkedList<T>::reverse(){
	if(size>1){
		Node<T> *curr1, *curr2;
		curr1 = NULL;
		curr2= head;
		while(head->getNext() != NULL){
			head = head->getNext();
			curr2->setNext(curr1);
			curr1 = curr2;
			curr2 = head;
		}
		curr2 ->setNext(curr1);
	}
}

template <class T>
bool LinkedList<T>::operator == (const LinkedList<T> &LL){
	if (size!=LL.size){
		return false;
	}
	else{
		Node<T> *curr1, *curr2;
		curr1 = head;
		curr2 = LL.head;
		for (int i = 0; i < size; ++i)
		{
			if(curr1->getData() != curr2-> getData()){
				return false;
			}
			curr1 = curr1->getNext();
			curr2 = curr2->getNext();
		}
		return true;
	}
}

template <class T>
void LinkedList<T>::operator += (T data){
	addLast(data);
}

template <class T>
void LinkedList<T>::operator += (const LinkedList<T> &LL){
	Node<T> *curr1, *curr2;
	curr1=head;
	curr2=LL.head;

	while(curr1->getNext()!=NULL)
	{
		curr1=curr1->getNext();
	}
	while(curr2!= NULL)
	{
		curr1->setNext(new Node<T>(curr2->getData(), NULL));
		curr1=curr1->getNext();
		curr2=curr2->getNext();
	}
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> &LL){
	
	if(LL.size == 0){
		this->head = NULL;
		this->size =0;
	} else {
		Node<T> *old, *nw;
		this->head = new Node<T>(LL.head->getData(), NULL);
		this->size=1;
		nw = head;

		old = LL.head->getNext();
		while(old!= NULL){
			nw->setNext(new Node<T>(old->getData(),NULL));
			nw = nw->getNext();
			old = old ->getNext();
			this->size++;
		}
	}

}

template <class T>
void LinkedList<T>::operator = (const LinkedList<T> &LL){
	this->deleteAll();

	if(LL.size == 0){
		this->head = NULL;
		this->size = 0;
	} else {
		Node<T> *old, *nw;
		old= LL.head;
		this->head = new Node<T>(old->getData(), NULL);
		this->size=1;
		nw = this-> head;
		old= old->getNext();

		while(old!=NULL){
			nw->setNext(new Node<T>(old->getData(), NULL));
			old=old->getNext();
			nw= nw->getNext();
		}
	}
}

