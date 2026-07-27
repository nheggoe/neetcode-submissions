class Solution:
    def wordBreak(self, s: str, wordDict: list[str]) -> bool:
        def recur(s: str) -> bool:
            if s == "": return True
            for word in wordDict:
                if s[:len(word)] == word:
                    if recur(s[len(word):]): return True 
            return False
        return recur(s)
