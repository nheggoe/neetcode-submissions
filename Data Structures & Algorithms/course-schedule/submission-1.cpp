#include <map>
#include <vector>
using std::map;
using std::vector;

class UnionFind {
 public:
  map<int, int> parents;

  int find(int x) {
    if (parents.find(x) == parents.end()) {
      return x;
    }
    return parents[x] = find(parents[x]);
  }

  bool join(int a, int b) {
    int roota = find(a);
    int rootb = find(b);
    if (roota == rootb) return false;
    parents[rootb] = roota;
    return true;
  }
};

class Solution {
 public:
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    UnionFind union_find = {};
    for (auto p : prerequisites) {
      bool success = union_find.join(p[1], p[0]);
      if (!success) return false;
    }
    return true;
  }
};