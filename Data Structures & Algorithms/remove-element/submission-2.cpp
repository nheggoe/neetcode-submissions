class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int last = nums.len() - 1;

        for (int idx = 0; idx < last; idx++) {
            while (nums[idx] == val) {
                int tmp = nums[idx];
                nums[idx] = nums[last];
                nums[last] = tmp;
                last -= 1;
            }
        }
    }
};