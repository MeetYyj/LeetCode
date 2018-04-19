#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    ListNode* new_head;
    if(head){
      new_head = head;
      head = head->next;
      new_head->next = NULL;
    }
    while (head){
      ListNode* tmp = head;
      head = head->next;
      tmp->next = new_head;
      new_head = tmp;
    }
    return new_head;
  }
};


int main() {
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
//  head->next->next = new ListNode(3);
//  head->next->next->next = new ListNode(4);


  Solution s;
  ListNode* tmp = head;
  while (tmp != NULL){
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;

  tmp = s.reverseList(head);
  while (tmp != NULL){
    cout << tmp->val << " ";
    tmp = tmp->next;
  }

  return 0;
}