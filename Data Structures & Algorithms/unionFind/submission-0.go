package main

type UnionFind struct {
	parent map[int]int
	rank   map[int]int
}

func NewUnionFind(n int) *UnionFind {
	parent := make(map[int]int)
	rank := make(map[int]int)
	for i := 1; i < n+1; i++ {
		parent[i] = i
		rank[i] = 0
	}
	return &UnionFind{
		parent: parent,
		rank:   rank,
	}
}

func (uf *UnionFind) Find(x int) int {
	if x != uf.parent[x] {
		uf.parent[x] = uf.Find(uf.parent[x])
	}
	return uf.parent[x]
}

func (uf *UnionFind) IsSameComponent(x, y int) bool {
	return x == y
}

func (uf *UnionFind) Union(x, y int) bool {
	p1, p2 := uf.Find(x), uf.Find(y)
	if p1 == p2 {
		return false
	}
	if uf.rank[p1] > uf.rank[p2] {
		uf.parent[p2] = p1
	} else if uf.rank[p1] < uf.rank[p2] {
		uf.parent[p1] = p2
	} else {
		uf.parent[p1] = p2
		uf.rank[p2] += 1
	}
	return true
}

func (uf *UnionFind) GetNumComponents() int {
	return len(uf.rank)
}
