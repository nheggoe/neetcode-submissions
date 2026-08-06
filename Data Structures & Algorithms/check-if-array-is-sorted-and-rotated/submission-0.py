class Solution:
    def check(self, nums: list[int]) -> bool:
        def rotated(xs: list[int], x: int) -> list[int]:
            n = len(xs)
            return [xs[(i + x) % n] for i in range(n)]
        xs = sorted(nums)
        for i in range(len(nums)):
            if rotated(xs, i) == nums:
                return True
        return False
