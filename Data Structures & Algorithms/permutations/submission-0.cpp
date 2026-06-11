class Solution {
  vector<vector<int>> helper(vector<int>& nums, int index) {
    if (index == nums.size()) return {{}};
    vector<vector<int>> resPerms;
    vector<vector<int>> perms = helper(nums, index + 1);
    for (vector<int> p : perms) {
      for (int i = 0; i < p.size() + 1; i++) {
        vector<int> pCopy(p);
        pCopy.insert(pCopy.begin() + i, nums[index]);
        resPerms.push_back(pCopy);
      }
    }
    return resPerms;
  }

 public:
  vector<vector<int>> permute(vector<int>& nums) { return helper(nums, 0); }
};
