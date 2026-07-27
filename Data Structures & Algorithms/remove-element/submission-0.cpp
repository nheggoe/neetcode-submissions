class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        return nums.size() - std::count(nums.begin(), nums.end(), val);
    }
};