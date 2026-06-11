class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (!list1 || !list2) return list1 == nullptr ? list2 : list1;
    ListNode* head = list1->val < list2->val ? list1 : list2;
    ListNode* tail = head;
    if (head == list1) {
      list1 = list1->next;
    } else {
      list2 = list2->next;
    }
    while (list1 && list2) {
      if (list1->val < list2->val) {
        tail->next = list1;
        tail = list1;
        list1 = list1->next;
      } else {
        tail->next = list2;
        tail = list2;
        list2 = list2->next;
      }
    }
    while (list1) {
      tail->next = list1;
      tail = list1;
      list1 = list1->next;
    }
    while (list2) {
      tail->next = list2;
      tail = list2;
      list2 = list2->next;
    }
    tail->next = nullptr;
    return head;
  }
};
