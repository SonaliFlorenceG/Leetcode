class Solution {
public:
int m, n;
    vector<vector<int>> directions {{0,1},{0,-1},{1,0},{-1,0}};
    
    void dfs(int r, int c, vector<vector<int>>& heights, vector<vector<bool>>& visited) {
        visited[r][c] = true;
        for (auto& d : directions) {
            int nr = r + d[0];
            int nc = c + d[1];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n 
                && !visited[nr][nc] 
                && heights[nr][nc] >= heights[r][c]) {
                dfs(nr, nc, heights, visited);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        if (m == 0) return {};
        n = heights[0].size();
        if (n == 0) return {};

        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        for (int i = 0; i < m; ++i) dfs(i, 0, heights, pacific);
        for (int j = 0; j < n; ++j) dfs(0, j, heights, pacific);

        for (int i = 0; i < m; ++i) dfs(i, n-1, heights, atlantic);
        for (int j = 0; j < n; ++j) dfs(m-1, j, heights, atlantic);

        vector<vector<int>> result;
        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (pacific[r][c] && atlantic[r][c]) {
                    result.push_back({r, c});
                }
            }
        }
        return result;
        
    }
};