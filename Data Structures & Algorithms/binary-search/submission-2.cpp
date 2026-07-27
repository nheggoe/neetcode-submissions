class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int gap = nums.size() / 2 - 1;
    int index = gap;
    do {
      gap /= 2;
      if (nums.at(index) == target) {
        return index;
      }
      if (nums.at(index) < target) {
        index += gap;
      } else {
        index -= gap;
      }
    } while (gap > 0);
    return -1;
  }
};
