class Solution:
    def subsetsWithDup(self, nums: list[int]) -> list[list[int]]:
        subsets: list[list[int]] = [[]]
        for n in sorted(nums):
            variants = subsets.copy()
            subsets = []
            for variant in variants:
                left, right = self.recur(variant, n)
                subsets.append(left)
                subsets.append(right)
        return [list(subset) for subset in set(map(tuple, subsets))]

    def recur(self, prev: list[int], next: int) -> tuple[list[int], list[int]]:
        right = prev.copy()
        right.append(next)
        return prev.copy(), right