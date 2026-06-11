class Solution {
    public boolean hasDuplicate(int[] nums) {
        var list = Arrays.stream(nums).boxed().toList();
        var set = Set.copyOf(list);
        return set.size() != nums.length;
    }
}
