impl Solution {
    pub fn cal_points(operations: Vec<String>) -> i32 {
        let mut stack: Vec<i32> = vec![];
        for op in operations {
            match op.as_str() {
                "+" => {
                    let y = stack.pop().unwrap();
                    let x = stack.pop().unwrap();
                    let z = x + y;
                    stack.push(x);
                    stack.push(y);
                    stack.push(z);
                }
                "C" => {
                    stack.pop();
                    ()
                }
                "D" => {
                    let x = stack.pop().unwrap();
                    let y = x * 2;
                    stack.push(x);
                    stack.push(y);
                }
                s => {
                    if let Ok(num) = s.parse::<i32>() {
                        stack.push(num)
                    } else {
                        unreachable!()
                    }
                }
            }
        }
        stack.iter().sum()
    }
}
