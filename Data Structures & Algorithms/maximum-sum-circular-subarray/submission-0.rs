impl Solution {
    pub fn max_subarray_sum_circular(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        if n == 0 {
            panic!("empty array");
        }

        let mut left = 0;

        let mut cur_sum = 0;
        let mut max_sum = nums[0];

        let mut i = 0;
        while i < n {
            let current = nums[(left + i) % n];
            cur_sum = if cur_sum < 0 {
                left = 0;
                i = 0;
                current
            } else {
                cur_sum + current
            };
            max_sum = max(cur_sum, max_sum);
            i += 1;
        }
        max_sum
    }
}