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
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode* accum = nullptr;
    for (auto e : lists) {
      accum = merge(accum, e);
    }
    return accum;
  }

  ListNode* merge(ListNode* left, ListNode* right) {
    if (!left) return right;
    if (!right) return left;
    vector<ListNode*> accum;
    while (left && right) {
      if (left->val <= right->val) {
        accum.push_back(left);
        left = left->next;
      } else {
        accum.push_back(right);
        right = right->next;
      }
    }
    while (left) {
      accum.push_back(left);
      left = left->next;
    }
    while (right) {
      accum.push_back(right);
      right = right->next;
    }
    if (accum.empty()) return nullptr;
    ListNode* head = accum.at(0);
    ListNode* tmp = head;
    for (int i = 1; i < accum.size(); ++i) {
      tmp->next = accum[i];
      tmp = accum[i];
    }
    tmp->next = nullptr;
    return head;
  }
};
