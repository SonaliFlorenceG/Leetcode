class Solution {
public:
    vector<int> diStringMatch(string s) {
        int d=s.size();
        cout<<d;
        int e=0;
        vector<int>a;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='I'){
                a.push_back(e);
                e++;
            }
            else if (s[i]=='D'){
                a.push_back(d);
                d--;
            }
        }
        a.push_back(e);
        return a;
    }
};