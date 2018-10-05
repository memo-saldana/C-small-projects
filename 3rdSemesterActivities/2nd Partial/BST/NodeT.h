class NodeT
{
public:
	NodeT(int data);
	~NodeT();
	int getData();
	NodeT* getLeft();
	NodeT* getRight();
	void setData(int data);
	void setLeft(NodeT *left);
	void setRight(NodeT *right);

private:
	int data;
	NodeT *left, *right;
	
};

NodeT::NodeT(int data){
	this->data = data;
	this-> left = NULL;
	this-> right = NULL;
}

// ~NodeT();
int NodeT::getData(){
	return data;
}
NodeT* NodeT::getLeft();
NodeT* NodeT::getRight();
void NodeT::setData(int data);
void setLeft(NodeT *left);
void setRight(NodeT *right);
