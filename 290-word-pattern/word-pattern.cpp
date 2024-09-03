class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>a;
        map<char,string>m;
        string b="";
        for (int i=0; i<s.size(); i++){
             b+=s[i];
            if (isspace(s[i+1]) || i+1==s.size()){
                i+=1;
                a.push_back(b);
                cout<<b<<endl;
                b="";
            }
        }
        if (pattern.size()!=a.size()){
            return false;
        }
        vector<string>ans;
        for (int i=0; i<a.size(); i++){
            auto t=m.find(pattern[i]);
            if (t==m.end()){
                int c=count(ans.begin(), ans.end(), a[i]); 
                if (c==0){
                    m.insert({ pattern[i], a[i] });
                    ans.push_back(a[i]);
                    cout<<m[pattern[i]]<<endl;
                }
                else{
                    return false;
                }
            }
            else{
                if (m[pattern[i]]!=a[i]){
                    cout<<a[i];
                    return false;
                }
            }
        }
        return true;
    }
};