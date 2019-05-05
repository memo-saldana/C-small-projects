#include <iostream>

using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 



  int max(int a, int b){
    return (a>b) ? a : b;
  }

  int getLength(TreeNode* r, int& current){
    if(r==NULL){
      return 0;
    }
    int left = getLength(r->left, current);
    int right = getLength(r->right, current);
    current = (current< left + right)? left + right : current; 
    return 1 + max(left,right);

  }

  int diameterOfBST(TreeNode* r){
    int current = 0;
    getLength(r, current);
    return current;
  }

int main(){

  TreeNode* r = new TreeNode(1);
  r->left= new TreeNode(-1);
  r->right = new TreeNode(6);
  r->right->left = new TreeNode(3);
  r->right->left->right = new TreeNode(5);
  r->right->right = new TreeNode(7);
  r->right->right->right = new TreeNode(8);
  
  
  cout<<diameterOfBST(r)<<endl;
  
  return 0;
}