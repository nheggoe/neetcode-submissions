class Solution {
    public boolean hasDuplicate(int[] nums) {
        Arrays.stream(nums).mapToObject(e -> (int) e).toList();
        var set = Set.copyOf(nums);
        return set.size() != nums.length;
    }
}
