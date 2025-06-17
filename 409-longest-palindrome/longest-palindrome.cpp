class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        int ans=0,o=0,e=0;
        for (int i=0; i<s.size(); i++){
            m[s[i]]+=1;
        }
        for(auto it:m){
            if (it.second%2==0){
                ans+=it.second;
                e=1;
            }
            else {
                ans += it.second - 1;
                o=1;
            }
        }
        if (o==1) return ans+1;
        return ans;
    }
};
