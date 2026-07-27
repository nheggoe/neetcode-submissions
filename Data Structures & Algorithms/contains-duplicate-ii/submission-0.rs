impl Solution {
    pub fn contains_nearby_duplicate(nums: Vec<i32>, k: i32) -> bool {
        if k <= 0 {
            return false;
        }

        let k = k as usize;
        let mut window = HashSet::new();

        for right in 0..nums.len() {
            if !window.insert(nums[right]) {
                return true;
            }

            if window.len() > k {
                window.remove(&nums[right - k]);
            }
        }
        false
    }
}
