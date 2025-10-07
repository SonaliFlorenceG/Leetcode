#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1); 
        unordered_map<int, int> fullLake;
        set<int> dryDays; 
        for (int i = 0; i < n; ++i) {
            if (rains[i] > 0) {
                int lake = rains[i];
                ans[i] = -1;
                if (fullLake.count(lake)) {
                    auto it = dryDays.lower_bound(fullLake[lake]);
                    if (it == dryDays.end()) return {};
                    ans[*it] = lake;
                    dryDays.erase(it);
                }
                fullLake[lake] = i;
            } 
            else {
                dryDays.insert(i);
            }
        }
        
        return ans;
    }
};
