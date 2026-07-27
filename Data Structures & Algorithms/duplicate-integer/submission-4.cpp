class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        const int size = nums.size();
        int currentNum;
        for (int i = 0; i < size; i++) {
            currentNum = nums.at(i);
            for (int j = i+1; j < size; j++) {
                if (nums.at(j) == currentNum) {
                    return true;
                }
            }
        }
        return false;
    }
}