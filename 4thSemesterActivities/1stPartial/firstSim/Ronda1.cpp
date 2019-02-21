#include <iostream>
using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
ListNode* deleteUnique(ListNode* head) {
  if(head==NULL){
    return head;
  }
  bool dup = true;
  ListNode* curr = head;
  ListNode* after = head->next;
  while(after!=NULL){
    if(curr->val!=after->val){
      ListNode* tmp = curr;
      curr = curr->next;
      head = curr;
      after = after -> next;
      delete tmp;
      
    } else {
      curr = curr->next;
      after = after -> next;
      break;
    }
  }
  if(after==NULL){
    head = head ->next;
    return head;
  }

  ListNode* before = head;
  while(after!=NULL){
    if(curr->val!=after->val){
      if(dup){
        dup = false;
        before = before->next;
        curr = curr->next;
        after = after -> next;
      } else{
        ListNode* tmp = curr;
        before->next = before->next->next;
        curr = curr->next;
        after = after -> next;
        delete tmp;
      }  
    } else {
      dup = true;
      before = before->next;
      curr = curr->next;
      after = after -> next;
    }
  }
  if(!dup){
    if(before->val != curr->val ){
      before->next = NULL;
      delete curr;
    }
  }
  return head;
}

int main() {
  cout<< "Hello"<<endl;
  return 0;
}