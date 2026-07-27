class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size();
    while (left < right) {
      const int mid = (left + right) / 2;
      if (nums.at(mid) < target) {
        left = mid + 1;
      } else if (nums.at(mid) > target) {
        right = mid - 1;
      } else {
        return mid;
      }
    }
    return -1;
  }
};
