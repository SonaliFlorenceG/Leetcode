class Solution {
public:
    int countWays(int n) {
        vector<int> dp(n + 1, 0);
        dp[1] = 1;
        if (n >= 2) dp[2] = 2;
        
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
    int climbStairs(int n) {
        return countWays(n);
    }
};