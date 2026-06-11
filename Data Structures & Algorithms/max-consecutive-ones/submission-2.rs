impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        let mut res = 0;
        let mut cnt = 0;
        for &num in &nums {
            cnt = if num == 1 { cnt + 1 } else { 0 };
            res = res.max(cnt);
        }
        res
    }
}
