class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        left = 0
        right = 1
        while right <= len(nums):
            while abs(left - right) <= k:
                section = nums[left : right + 1]
                if len(set(section)) < len(section):
                    return True
                right += 1
            left += 1
            right = left + 1
        return False