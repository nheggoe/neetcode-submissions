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
  std::vector<std::vector<Pair>> insertionSort(std::vector<Pair>& pairs) {
    std::vector<std::vector<Pair>> acc;
    for (int i = 0; i < pairs.size(); ++i) {
      int j = i - 1;
      while (j >= 0 && pairs[j].key > pairs[j + 1].key) {
        const auto tmp = pairs[j + 1];
        pairs[j + 1] = pairs[j];
        pairs[j] = tmp;
        --j;
      }
      acc.emplace_back(pairs.begin(), pairs.end());
    }
    return acc;
  }
};


