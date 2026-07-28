class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        left = 0
        right = k + 1
        while right <= len(nums):
            section = nums[left:right]
            if len(set(section)) <= k:
                return True
            left += 1
            right += 1
        return False