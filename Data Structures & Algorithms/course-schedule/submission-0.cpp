class UnionFind {
 public:
  map<int, int> parents;

  int find(int child) {
    if (parents.find(child) == parents.end()) {
      return child;
    }
    return find(parents[child]);
  }

  bool unnion(int parent, int child) {
    int root = find(parent);
    if (root == child) return false;
    parents[child] = root;
    return true;
  }
};

class Solution {
 public:
  bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    UnionFind union_find = {};
    for (auto p : prerequisites) {
      bool success = union_find.unnion(p[1], p[0]);
      if (!success) return false;
    }
    return true;
  }
};