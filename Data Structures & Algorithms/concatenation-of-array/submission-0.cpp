class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans;
        for (int i = 0; i < 2; ++i) {
            for (auto e : nums) {
                ans.push_back(e);
            }
        }
        return ans;
    }
};