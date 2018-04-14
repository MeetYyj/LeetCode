#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  void deleteNode(ListNode* node) {
    auto node_to_delete = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    delete node_to_delete;
  }
};




int main() {
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);

  Solution s;
  s.deleteNode(head->next->next);
  ListNode *tmp = head;
  while(tmp != NULL){
    cout << tmp->val <<" -> ";
    tmp = tmp->next;
  }
  return 0;
}