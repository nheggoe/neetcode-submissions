impl Solution {
    pub fn replace_elements(arr: Vec<i32>) -> Vec<i32> {
        let mut arr = arr.clone();
        let mut max_right = -1;
        for x in arr.iter_mut().rev() {
            let old = *x;
            *x = max_right;
            max_right = max_right.max(old);
        }
        arr
    }
}


