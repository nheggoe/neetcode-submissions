class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());  
        auto unique_end = std::unique(nums.begin(), nums.end());
        nums.erase(unique_end, nums.end());
        return nums.size();
    }
};