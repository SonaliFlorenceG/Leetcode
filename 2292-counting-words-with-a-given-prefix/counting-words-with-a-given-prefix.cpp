class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        vector<string>a;
        for (int i=0; i<words.size(); i++){
            string s="";
            a.push_back(words[i].substr(0,n));
        }
        int c=0;
        for (int i=0; i<a.size(); i++){
            if (a[i]==pref){
                c++;
            }
        }
        return c;
    }
};