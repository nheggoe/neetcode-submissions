class Solution {
public:
    bool isOpen(char c) {
        return c == '(' || c == '[' || c == '{';
    }

    bool isClose(char c) {

    }

    bool isMatching(char open, char closed) {
        switch (open) {
        case '(':
            return closed == ')';
        case '[':
        return closed == ']';
        case '{':
        return closed == '}';

        default:
        return false;

        };
    }

    bool isValid(std::string s) {
        std::stack<char> brackets;
        std::vector<char> chars(s.begin(), s.end());
        for (auto c : chars) {
            if (isOpen(c)) {
                brackets.push(c);
            } else {
                if (brackets.size() == 0) return false;
                char open = brackets.top();
                brackets.pop();
                if (!isMatching(open, c)) return false;
            }
        }
        return true;
    }
};
