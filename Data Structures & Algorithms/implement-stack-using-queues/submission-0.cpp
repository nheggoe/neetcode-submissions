class MyStack {
  std::queue<int> _queue;

 public:
  MyStack() {}

  void push(int x) { _queue.push(x); }

  int pop() {
    int out = _queue.back();
    for (int i = 0; i < _queue.size() - 1; i++) {
      _queue.push(_queue.front());
      _queue.pop();
    }
    _queue.pop();
    return out;
  }

  int top() { return _queue.back(); }

  bool empty() { return _queue.empty(); }
};
