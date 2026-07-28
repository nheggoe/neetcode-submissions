class Solution:
    def containsNearbyDuplicate(self, nums: list[int], k: int) -> bool:
        left = 0
        right = 1
        while right <= len(nums):
            while right - left < k:
                section = nums[left:right]
                if len(set(section)) <= k:
                    return True
                right += 1
            left += 1
            right = left + 1
        return False

