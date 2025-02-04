class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>dp(rowIndex+1);
        dp[0]={1};
        if (rowIndex>=1) dp[1]={1,1};
        for (int i=2; i<=rowIndex; i++){
            vector<int>temp;
            temp.push_back(1);
            for (int j=1; j<=i-1; j++){
                int t=dp[i-1][j-1]+dp[i-1][j];
                temp.push_back(t);
            }
            temp.push_back(1);
            dp[i]=temp;
        }
        return dp[rowIndex];
    }
};