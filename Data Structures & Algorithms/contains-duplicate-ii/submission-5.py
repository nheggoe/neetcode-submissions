class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        last_seen = {}
        for i, v in enumerate(nums):
            if v in last_seen and i - last_seen[v] <= k:
                return True
            last_seen[v] = i
        return False
