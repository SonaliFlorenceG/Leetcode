class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans=false;
        int a=s.size();
        int b=t.size();
        int i=0,j=0;
        if (s==""){
            return true;
        }
        while(i<b){
            if (t[i]==s[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
            if (j==a){
                ans=true;
                break;
            }
        }
        return ans;
    }
};