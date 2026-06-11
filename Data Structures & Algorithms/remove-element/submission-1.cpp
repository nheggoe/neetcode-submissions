class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size() - std::count(nums.begin(), nums.end(), val); 
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());

        return k;
    }
};