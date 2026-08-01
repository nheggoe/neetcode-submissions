class Solution:
    def threeSumSmaller(self, nums: list[int], target: int) -> int:
        ns = sorted(nums)
        count = 0
        i = 0
        for j in range(i + 1, len(ns)):
            for k in range(j + 1, len(ns)):
                if ns[i] + ns[j] + ns[k] < target:
                    count += 1
            i += 1
        return count
