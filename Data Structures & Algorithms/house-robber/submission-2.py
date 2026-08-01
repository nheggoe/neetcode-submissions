class Solution:
    def rob(self, nums: list[int]) -> int:
        dp = [-1] * len(nums)

        def rob(idx: int) -> int:
            if idx >= len(nums):
                return 0
            if dp[idx] != -1:
                return dp[idx]
            dp[idx] = max(nums[idx] + rob(idx + 2), rob(idx + 1))
            return dp[idx]
        
        rob(0)
        return dp[0]