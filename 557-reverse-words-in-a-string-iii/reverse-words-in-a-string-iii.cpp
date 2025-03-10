class Solution {
public:
    string reverseWords(string s) {
        int c=0;
        string ans="";
        string t="";
        for (int i=0; i<=s.size(); i++){
                if (s[i]!=' ' && i!=s.size()){
                    t+=s[i];
                }
                else{
                    int k=0;
                    int j=t.size()-1;
                    while(k<j){
                        char temp=t[k];
                        t[k]=t[j];
                        t[j]=temp;
                        k++;
                        j--;
                    }
                    // cout<<"."<<t<<"."<<endl;
                    ans+=t; 
                    if (i<s.size()) ans+=" ";
                    t="";
                }
        }
        return ans;
    }
};