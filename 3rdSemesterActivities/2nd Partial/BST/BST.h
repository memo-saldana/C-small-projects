#include "NodeT.h"
class BST
{
public:
	BST();
	// ~BST();
	void add(int data);
	bool search(int data);
	void remove(int data);

private:
	NodeT *root;

};

BST::BST(){
	root=NULL;
}
// ~BST();
// void BST::add(int data){
// }
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
void remove(int data);