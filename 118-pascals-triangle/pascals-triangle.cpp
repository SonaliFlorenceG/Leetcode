class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>dp(numRows);
        dp[0]={1};
        if (numRows>=2) dp[1]={1,1};
        for (int i=2; i<numRows; i++){
            vector<int>temp;
            temp.push_back(1);
            for (int j=1; j<=i-1; j++){
                int t=dp[i-1][j-1]+dp[i-1][j];
                temp.push_back(t);
            }
            temp.push_back(1);
            dp[i]=temp;
        }
        return dp;
    }
};