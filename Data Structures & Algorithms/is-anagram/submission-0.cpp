#include <algorithm>
#include <string>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::vector<char> s_vec(s.begin(), s.end());
        std::vector<char> t_vec(t.begin(), t.end());
        std::sort(s_vec.begin(), s_vec.end());
        std::sort(t_vec.begin(), t_vec.end());
        return s_vec == t_vec;
    }
};