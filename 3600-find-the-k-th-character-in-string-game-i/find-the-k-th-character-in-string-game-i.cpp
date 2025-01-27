class Solution {
public:
    string something (string s,int k){
        if (s.size()>=k){
            return s;
        }
        string t="";
        for (int i=0; i<s.size(); i++){
            if (s[i]=='z'){
                t+='a';
            }
            else{
                char r=s[i];
                int temp=r;
                char c = (char)temp+1;
                t+=c;
            }
        }
        s.append(t);
        return something(s,k);
    }
    char kthCharacter(int k) {
        string s="a";
        string ans=something(s,k);
        cout<<ans;
        return ans[k-1];
    }
};