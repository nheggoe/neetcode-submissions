impl Solution {
    pub fn max_subarray_sum_circular(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        if n == 0 {
            panic!("empty array");
        }

        let mut max_sum = nums[0];

        for right in (n - 1)..(2 * n - 1) {
            let left = right - (n - 1);

            let mut cur_sum = 0;
            for i in left..=right {
                let current = nums[i % n];
                cur_sum = cur_sum.max(0) + current;
                max_sum = max_sum.max(cur_sum);
            }
        }
        max_sum
    }
}
