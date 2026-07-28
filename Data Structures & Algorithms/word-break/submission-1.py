class Solution:
    def wordBreak(self, s: str, wordDict: list[str]) -> bool:
        return self.helper(s, set(wordDict))

    def helper(self, s: str, word_dict: set[str]) -> bool:
        if s == "": return True
        right = 0
        for idx in range(len(s)):
            word = s[:idx+1]
            if word in word_dict:
                if self.helper(s[idx+1:], word_dict): return True

        return False