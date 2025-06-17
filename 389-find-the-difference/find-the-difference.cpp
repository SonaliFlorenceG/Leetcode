class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;
        char a;
        for (int i=0; i<s.size(); i++){
            m[s[i]]+=1;
        }
        for (int i=0; i<t.size(); i++){
            if (m[t[i]]>=1) m[t[i]]--;
            else return t[i];
        }
        return a;
    }
};