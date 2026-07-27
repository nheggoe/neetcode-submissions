class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for (auto e : strs) {

            std::string sorted = e;
            std::sort(e.begin(), e.end());
            std::cout << sorted;
        }
       return{}; 
    }
};
