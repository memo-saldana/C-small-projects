#include "NodeT.h"
class BST
{
public:
	BST();
	~BST();
	void add(int data);
	bool search(int data);
	void remove(int data);
	void print(int c);
	void printLeaves();
	int count();
	int height();
	void ancestors(int data);
	int whatLevelamI(int data);
	int nearestRelative(int a, int b);
	int maxWidth();
private:
	NodeT *root;
	int howManyChildren(NodeT *r);
	int pred(NodeT *r);
	int succ(NodeT *r);
	void preOrder(NodeT *r);
	void inOrder(NodeT *r);
	void postOrder(NodeT *r);
	void freeup(NodeT *r);
	void PL(NodeT *r);
	int getN(NodeT *r);
	int getHeight(NodeT *r);
	void printByLevel();

};


BST::BST(){
	root=NULL;	
}

void BST::freeup(NodeT *r){
	if(r!=NULL){
		freeup(r->getLeft());
		freeup(r->getRight());
		delete r;
	}
}

BST::~BST(){
	freeup(root);
}
int BST::howManyChildren(NodeT *r){
	int c = 0;
	if(r->getLeft() != NULL){
		c++;
	}
	if(r->getRight() != NULL){
		c++;
	}
	return c;
}

int BST::pred(NodeT *r){
	NodeT *aux = r->getLeft();
	while(aux->getRight() != NULL){
		aux = aux->getRight();
	}
	return aux->getData();
}

int BST::succ(NodeT *r){
	NodeT *aux = r->getRight();
	while( aux->getLeft() != NULL){
		aux = aux->getRight();
	}

	return aux->getData();
}

void BST::preOrder(NodeT *r){
	if(r != NULL){
		cout << r->getData() << " ";
		preOrder(r->getLeft());
		preOrder(r->getRight());
	}
}

void BST::inOrder(NodeT *r){
	if(r!=NULL){
		inOrder(r->getLeft());
		cout << r->getData() << " ";
		inOrder(r->getRight());

	}
}

void BST::postOrder(NodeT *r){
	if(r!=NULL){
		postOrder(r->getLeft());
		postOrder(r->getRight());
		cout << r->getData() << " ";

	}
}

void BST::add(int data){
	NodeT *father = NULL;
	NodeT *curr = root;
	while(curr!=NULL){
		father = curr;
		if(curr->getData() == data){
			return;
		}
		curr = (curr->getData() > data) ? 
						curr->getLeft() : curr->getRight();
	}
	if(father == NULL){
		root = new NodeT(data);
	} else {
		if(father->getData() > data){
			father->setLeft(new NodeT(data));
		} else {
			father->setRight(new NodeT(data));
		}
	}
}

bool BST::search(int data){
	NodeT *curr = root;
	while(curr!=NULL){
		if(curr->getData() == data){
			return true;
		}
		curr = (curr->getData() > data) ?
						curr->getLeft() : curr->getRight();
	}
	return false;
}
void BST::remove(int data){
	NodeT *curr = root;
	NodeT *father = NULL;
	
	while(curr != NULL && curr -> getData() != data){
		father = curr;
		curr = (curr->getData() > data) ?
						curr->getLeft() : curr->getRight();
	}
	
	if(curr == NULL){
		return;
	} 		
	int c = howManyChildren(curr);

	switch(c){
		case 0:
			if (father == NULL){
				root = NULL;
			}
			else {
				if(father->getData() > data){
					father->setLeft(NULL);
				}
				else{
					father->setRight(NULL);
				}
			}
			delete curr;
			break;

		case 1:
			if(father == NULL){
				if(curr->getLeft() != NULL){
					root = curr->getLeft();
				}
				else{
					root = curr->getRight();
				}
			}
			else {
				if (father->getData() > data){
					if(curr->getLeft() !=NULL){
						father->setLeft(curr->getLeft());
					}
					else{
						father->setLeft(curr->getRight());
					}
				}
				else{
					if(curr->getLeft() != NULL){
						father->setRight(curr->getLeft());
					}
					else{
						father->setRight(curr->getRight());
					}
				}
			}
			delete curr;
			break;

		case 2:
			int x = succ(curr);
			remove (x);
			curr->setData(x);
			break;
	}
}

void BST::print(int c){
	switch(c){
		case 1: 
			preOrder(root);
			break;
		case 2: 
			inOrder(root);
			break;
		case 3:
			postOrder(root);
			break;

		case 5:
			printByLevel();
	}
	cout<<endl;
}

void BST::PL(NodeT *r){
	if(r!=NULL){
		if(r->getLeft() == NULL && r->getRight() == NULL){
			cout<<r->getData()<<' ';
		} else {
			PL(r->getLeft());
			PL(r->getRight());
		}
	}
}

void BST::printLeaves(){
	PL(root);
}

int BST::getN(NodeT *r){
	if(r == NULL){
		return 0;
	} else {
		return 1 + getN(r->getLeft()) + getN(r->getRight());
	}
}

int BST::count(){
	return getN(root);
}

int BST::getHeight(NodeT *r){
	if(r!=NULL){
		if(r->getLeft() == NULL && r->getRight() == NULL){
			return 1;
		}
		else {
			return 1 + max(getHeight(r->getLeft()),getHeight(r->getRight()));
		}	
	}
	else{
		return 0;
	}
}

int BST::height(){
	return getHeight(root);
}

void BST::ancestors(int data){
	stack<NodeT *> stack;
	NodeT *curr = root;
	while(curr!= NULL && curr->getData() != data){
		stack.push(curr);
		curr = (data > curr->getData() ) ? curr->getRight() : curr->getLeft();
	}

	while(!stack.empty()){
		cout<<stack.top()->getData()<<" ";
		stack.pop();
	}
}



int BST::whatLevelamI(int data){
	NodeT *curr = root;
	int level = 0;
	while(curr != NULL){
		if(curr->getData() == data){
			return level;
		} else{
			curr = (data > curr->getData()) ? curr->getRight(): curr->getLeft();
		}
		
		level++;
	}
	return -1;
}

void BST::printByLevel(){
	if(root!=NULL){
		queue<NodeT *> q;
		NodeT *temp;
		q.push(root);
		while(!q.empty()){
			temp = q.front();
			q.pop();
			cout << temp->getData() << " ";

      if(temp->getLeft()!=NULL){
	      q.push(temp->getLeft());
	    }
	    if(temp->getRight()!=NULL){
	    	q.push(temp->getRight());
	    }


		}		
	}
}

int BST::nearestRelative(int a, int b){
	// queue<int> queueA, queueB;
	// int res;
	// NodeT *curr=root;
	// while(curr!= NULL && curr->getData() != a){
	// 	queueA.push(curr->getData());
	// 	curr = (a > curr->getData() ) ? curr->getRight() : curr->getLeft();
	// }
	// curr=root;
	// while(curr!= NULL && curr->getData() != b){
	// 	queueB.push(curr->getData());
	// 	curr = (b > curr->getData() ) ? curr->getRight() : curr->getLeft();
	// }
	// while(queueA.front() == queueB.front()){
	// 	res = queueA.front();
	// 	queueA.pop();
	// 	queueB.pop();
	// }
	// return res;

	NodeT *curr1=root;
	NodeT *curr2=root;
	int res=NULL;
	while(curr1!= NULL && curr2!=NULL){
		cout<<curr1->getData()<<" - "<<curr2->getData()<<endl;
		if(curr1->getData() != curr2->getData()){
			return res;
		} else {
			res = curr1->getData();
			curr1 = (a > curr1->getData() ) ? curr1->getRight() : curr1->getLeft();
			curr2 = (b > curr2->getData() ) ? curr2->getRight() : curr2->getLeft();
		}

	}
	return NULL;
}

int BST::maxWidth(){
	if(root==NULL){
		return 0;
	}
	int res=0;
	queue<NodeT*> queue;
	queue.push(root);
	while(!queue.empty()){
		int count = queue.size();
		res = max(res,count);
		while(count>0){
			NodeT *t = queue.front();
			queue.pop();

			if(t->getLeft()!=NULL){
				queue.push(t->getLeft());
			}
			if(t->getRight()!=NULL){
				queue.push(t->getRight());
			}
			count--;
		}
	}
	return res;
}