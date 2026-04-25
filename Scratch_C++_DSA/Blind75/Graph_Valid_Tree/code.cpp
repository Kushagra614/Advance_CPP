#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> parent, rank_;
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;
        if (rank_[px] < rank_[py]) swap(px, py);
        parent[py] = px;
        if (rank_[px] == rank_[py]) rank_[px]++;
        return true;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if ((int)edges.size() != n - 1) return false;
        parent.resize(n); rank_.resize(n, 0);
        iota(parent.begin(), parent.end(), 0);
        for (auto& e : edges)
            if (!unite(e[0], e[1])) return false;
        return true;
    }
};
