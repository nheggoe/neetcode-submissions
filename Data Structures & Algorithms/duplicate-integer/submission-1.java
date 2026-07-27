class Solution {
    public boolean hasDuplicate(int[] nums) {
        Arrays.stream(nums).toList();
        var set = Set.copyOf(nums);
        return set.size() != nums.length;
    }
}
