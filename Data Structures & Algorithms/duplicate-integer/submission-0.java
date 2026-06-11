class Solution {
    public boolean hasDuplicate(int[] nums) {
        List list = new ArrayList();
        boolean duplicate = false;
        for (int n : nums) {
            if (list.contains(n)) {
                duplicate = true;
            }
            list.add(n);
        }
        return duplicate;
    }
}
