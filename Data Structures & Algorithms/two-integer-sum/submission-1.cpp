class Solution {
 public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> cache;
    for (int i = 0; i < nums.size(); ++i) {
      auto num = nums.at(i);
      auto diff = target - num;
      if (cache.find(diff) != cache.end()) {
        return {cache[diff], i};
      }
      cache[num] = i;
    }
    return {};
  }
};
