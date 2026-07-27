impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        if nums.len() == 0 {
            panic!("empty array");
        }
        let mut cur_sum = 0;
        let mut max_sum = nums[0];
        for n in nums {
            cur_sum = max(cur_sum, 0) + n;
            max_sum = max(max_sum, cur_sum);
        }
        max_sum
    }
}