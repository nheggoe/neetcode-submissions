// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
 public:
  vector<Pair> mergeSort(vector<Pair>& pairs) {
    if (pairs.size() <= 1) {
      return pairs;
    }

    const int middle = pairs.size() / 2;

    vector left(pairs.begin(), pairs.begin() + middle);
    vector right(pairs.begin() + middle, pairs.end());

    left = mergeSort(left);
    right = mergeSort(right);
    return merge(left, right);
  }

  vector<Pair> merge(vector<Pair>& left, vector<Pair>& right) {
    int l = 0;
    int r = 0;
    vector<Pair> accum;

    while (l < left.size() && r < right.size()) {
      if (left[l].key <= right[r].key) {
        accum.push_back(left[l++]);
      } else {
        accum.push_back(right[r++]);
      }
    }
    while (l < left.size()) {
      accum.push_back(left[l++]);
    }
    while (r < right.size()) {
      accum.push_back(right[r++]);
    }
    return accum;
  }
};

