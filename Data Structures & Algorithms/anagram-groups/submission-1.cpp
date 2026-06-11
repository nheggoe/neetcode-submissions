class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::string, std::vector<std::string>> result;
        for (auto e : strs) {
            std::string sorted = e;
            std::sort(sorted.begin(), sorted.end());
            if (result.find(sorted) != result.end()) {
                result[sorted].push_back(e);
            } else {
                result[sorted] = {e};
            }
            // std::cout << sorted << ' ';
        }
        std::vector<std::vector<std::string>> values;
        for (const auto& entry : result) {
      values.push_back(entry.second);
        }
        return values;
    }
};
