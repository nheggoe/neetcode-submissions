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
  vector<Pair> quickSort(vector<Pair>& pairs) {
    quickSortHelper(pairs, 0, pairs.size() - 1);
    return pairs;
  }

  void quickSortHelper(vector<Pair>& pairs, const int start, const int end) {
    if (start >= end) return;

    const Pair pivot = pairs.at(end);
    int i = start;
    
    for (int j = start; j < end; ++j) {
      if (pairs[j].key < pivot.key) {
        const Pair tmp = pairs[i];
        pairs[i] = pairs[j];
        pairs[j] = tmp;
        ++i;
      }
    }

    pairs[end] = pairs[i];
    pairs[i] = pivot;

    quickSortHelper(pairs, start, i - 1);
    quickSortHelper(pairs, i + 1, end);
  }
};
