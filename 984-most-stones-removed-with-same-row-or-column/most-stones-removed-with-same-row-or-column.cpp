class Solution {
public:
    
int find(int x, vector<int>& parent) {
    if (parent[x] != x) {
        parent[x] = find(parent[x], parent);
    }
    return parent[x];
}

void unite(int x, int y, vector<int>& parent, vector<int>& rank) {
    int rootX = find(x, parent);
    int rootY = find(y, parent);
    if (rootX != rootY) {
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

int removeStones(vector<vector<int>>& stones) {
    int n = stones.size();
    vector<int> parent(n);
    vector<int> rank(n, 1);
    unordered_map<int, int> rowMap, colMap;
    for (int i = 0; i < n; ++i) {
        parent[i] = i;
    }
    for (int i = 0; i < n; ++i) {
        int row = stones[i][0];
        int col = stones[i][1];
        if (rowMap.find(row) != rowMap.end()) {
            unite(i, rowMap[row], parent, rank);
        }
        if (colMap.find(col) != colMap.end()) {
            unite(i, colMap[col], parent, rank);
        }
        rowMap[row] = i;
        colMap[col] = i;
    }
    unordered_map<int, int> componentCount;
    for (int i = 0; i < n; ++i) {
        int root = find(i, parent);
        componentCount[root]++;
    }
    return n - componentCount.size();
}

};