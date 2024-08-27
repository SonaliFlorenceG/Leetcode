class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
         vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0;
        bool updated;
        do {
            updated = false;
            for (int i = 0; i < edges.size(); ++i) {
                int u = edges[i][0];
                int v = edges[i][1];
                double prob = succProb[i];
                if (maxProb[u] * prob > maxProb[v]) {
                    maxProb[v] = maxProb[u] * prob;
                    updated = true;
                }
                if (maxProb[v] * prob > maxProb[u]) {
                    maxProb[u] = maxProb[v] * prob;
                    updated = true;
                }
            }
        } while (updated);
        return maxProb[end_node];
    }
};