class Solution {
public:
    int maxScore(string s) {
        vector<int>ans;
        int c1=0,c2=0;
        int n=s.size();
        int c=1;
        while(c<s.size()){
            for (int i=0; i<c; i++){
                if (s[i]=='0'){
                    c1++;
                }
            }
            for (int i=c; i<s.size(); i++){
                if (s[i]=='1'){
                    c2++;
                }
            }
            ans.push_back(c1+c2);
            c1=0;
            c2=0;
            c++;
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};