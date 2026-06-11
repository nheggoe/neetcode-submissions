class MinStack {
    std::vector<int> data;
public:
    MinStack() {

    }
    
    void push(int val) {
      data.push_back(val);
    }
    
    void pop() {
        data.pop_back();
    }
    
    int top() {
        return data.at(data.size() - 1);
    }
    
    int getMin() {
        auto clone = data;
        std::sort(clone.begin(), clone.end());
        return clone.at(0);
    }
};
