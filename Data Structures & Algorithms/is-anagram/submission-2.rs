impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut x: Vec<_> = s.chars().collect();
        let mut y: Vec<_> = t.chars().collect();
        x.sort();
        y.sort();
        x == y
    }
}
