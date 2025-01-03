class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>a;
        for (int i = 0; i < words.size(); i++) {
            int n = words[i].size() - 1;
            if ((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && 
                (words[i][n] == 'a' || words[i][n] == 'e' || words[i][n] == 'i' || words[i][n] == 'o' || words[i][n] == 'u')) {
                a.push_back(i);
            }
        }

        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            int c = 0;
            for (int j=0; j<a.size(); j++){
                if (a[j]>=queries[i][0] && a[j]<=queries[i][1] ){
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};
