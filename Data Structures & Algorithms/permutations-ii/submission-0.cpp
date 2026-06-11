class Solution {
 public:
  set<vector<int>> helper(vector<int>& nums, int index) {
    if (index == nums.size()) return {{}};
    set<vector<int>> permRes;
    set<vector<int>> perms = helper(nums, index + 1);
    for (vector<int> p : perms) {
      for (int i = 0; i <= p.size(); i++) {
        vector<int> pCopy(p);
        pCopy.insert(pCopy.begin() + i, nums[index]);
        permRes.insert(pCopy);
      }
    }
    return permRes;
  }

  vector<vector<int>> permuteUnique(vector<int>& nums) {
    set<vector<int>> result = helper(nums, 0);
    return vector(result.begin(), result.end());
  }
};