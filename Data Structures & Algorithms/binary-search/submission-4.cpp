class Solution {
 public:
  int search(vector<int>& nums, int target) {
    if (nums.size() <= 2) {
      for (int i = 0; i < nums.size(); i++) {
        if (nums.at(i) == target) {
          return i;
        }
      }
      return -1;
    }
    int gap = nums.size() / 2;
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
