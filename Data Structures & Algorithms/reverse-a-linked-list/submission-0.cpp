/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
 public:
  std::stack<ListNode*> nodes;

  void traverseList(ListNode*& head) {
    if (head != nullptr) {
      nodes.push(head);
      traverseList(head->next);
    }
  }
  ListNode* reverseList(ListNode* head) {
    traverseList(head);
    auto new_head = head;
    if (!nodes.empty()) {
      new_head = nodes.top();
      nodes.pop();

      auto next = new_head;
      while (!nodes.empty()) {
        next->next = nodes.top();
        next = nodes.top();
        nodes.pop();
      }
      next->next = nullptr;
    }
    return new_head;
  }
};

