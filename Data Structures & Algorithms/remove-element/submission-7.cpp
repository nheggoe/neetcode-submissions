void swap(int *a, int *b) {
  const int tmp = *a;
  *a = *b;
  *b = tmp;
}

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int length = 0;
    int last = nums.size() - 1;
    for (int idx = 0; idx <= last; idx++) {
      while (nums[idx] == val) {
        if (idx > last)
          return length;
        swap(&nums[idx], &nums[last]);
        last -= 1;
      }
      length += 1;
    }
    return length;
  }
};
