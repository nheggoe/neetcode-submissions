class Solution {
public:
    int xorDecisionTree(vector<int> &xs, int i, int total) {
        if (i == xs.size()) return total;
        return xorDecisionTree(xs, i + 1, total ^ xs[i]) + xorDecisionTree(xs, i + 1, total);
    }
    int subsetXORSum(vector<int> &nums) {
        return xorDecisionTree(nums, 0, 0);
    }
};