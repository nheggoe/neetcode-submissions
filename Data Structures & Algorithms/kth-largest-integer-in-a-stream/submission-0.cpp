class KthLargest {
  vector<int> heap;
  int largest;

 public:
  KthLargest(int k, vector<int>& nums) : largest(k) {
    heapPush(0);
    for (auto e : nums) {
      heapPush(e);
    }
  }

  int add(int val) {
    heapPush(val);
    vector<int> accum;
    for (int i = 0; i < largest; ++i) {
      accum.push_back(heapPop());
    }
    int result = accum.at(accum.size() - 1);
    accum.pop_back();
    for (auto e : accum) {
      heapPush(e);
    }
    return result;
  }

 private:
  void heapPush(int val) {
    heap.push_back(val);
    int current_index = heap.size() - 1;
    int parent_index = current_index / 2;

    while (parent_index != 0 &&
           heap.at(parent_index) > heap.at(current_index)) {
      swap(heap.at(parent_index), heap.at(current_index));
      current_index = parent_index;
      parent_index = current_index / 2;
    }
  }

  int heapPop() {
    if (heap.size() < 2) return -1;
    int min_val = heap.at(1);
    heap[1] = heap.at(heap.size() - 1);
    heap.pop_back();
    int current_index = 1;
    int left_child = current_index * 2;
    int right_child = left_child + 1;
    while (left_child < heap.size()) {
      if (right_child < heap.size() &&
          heap.at(right_child) < heap.at(left_child)) {
        swap(heap.at(right_child), heap.at(current_index));
        current_index = right_child;
        left_child = current_index * 2;
        right_child = left_child + 1;
      } else if (heap.at(left_child) < heap.at(current_index)) {
        swap(heap.at(left_child), heap.at(current_index));
        current_index = left_child;
        left_child = current_index * 2;
        right_child = left_child + 1;
      } else {
        break;
      }
    }
    return min_val;
  }
};
