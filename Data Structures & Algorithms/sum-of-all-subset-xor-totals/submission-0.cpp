class Solution {
public:
  int xorVector(vector<int> &nums) {
    auto len = nums.size();
    if (len == 0) {
      return 0;
    }
    auto res = nums[0];
    for (int i = 1; i < len; i++) {
      res ^= nums[i];
    }
    return res;
  }

  vector<vector<int>> subsets(vector<int> &nums, int i, vector<vector<int>> &xs) {
    if (i >= nums.size()) return xs;
    vector<vector<int>> res = vector<vector<int>>{};
    for (auto l : xs) {
      auto l2 = l;
      res.push_back(l);
      l2.push_back(nums[i]);
      res.push_back(l2);
    }
    return subsets(nums, i + 1, res);
  }

  int subsetXORSum(vector<int> &nums) {
    auto vec = vector<vector<int>>{};
    auto empty = vector<int>{};
    vec.push_back(empty);
    auto sum = 0;
    for (auto l : subsets(nums, 0, vec)) {
      sum += xorVector(l);
    }
    return sum;
  }
};
