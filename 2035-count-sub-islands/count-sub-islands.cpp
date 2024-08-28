class Solution {
public:
    int m, n;
    bool markAndCheck(int i, int j, vector<vector<int>>& grid1, vector<vector<int>>& grid2)
    {
        vector<pair<int, int>> stack;
        stack.push_back(make_pair(i, j));
        bool isSubIsland = true;
        while (!stack.empty()) {
            pair<int, int> cell = stack.back();
            stack.pop_back();
            int x = cell.first;
            int y = cell.second;
            if (grid1[x][y] == 0) {
                isSubIsland = false;
            }
            grid2[x][y] = 0;
            int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
            for (int d = 0; d < 4; ++d) {
                int nx = x + directions[d][0];
                int ny = y + directions[d][1];
                if (nx >= 0 && ny >= 0 && nx < m && ny < n && grid2[nx][ny] == 1) {
                    stack.push_back(make_pair(nx, ny));
                }
            }
        }

        return isSubIsland;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        m = grid1.size();
        n = grid1[0].size();
        int count = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid2[i][j] == 1) {
                    if (markAndCheck(i, j, grid1, grid2)) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};