class Solution {
public:
    int getLucky(string s, int k) {
        string a="";
        for (int i=0; i<s.size(); i++){
            a+=to_string(s[i]-96);
        }
        long long int ans=0;
        long long int i=0;
        while (i<k){
            for (int j=0; j<a.size(); j++){
                int t= a[j]-48;
                ans+=t;
            }
            a=to_string(ans);
            i++;
            if (i<k){
                ans=0;
            }
        }
        return ans;
    }
};