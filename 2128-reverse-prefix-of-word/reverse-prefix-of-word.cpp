class Solution {
public:
    string reversePrefix(string word, char ch) {
        string t="";
        int c=0;
        for (int i=0; i<word.size(); i++){
            if (word[i]!=ch && c==0){
                t+=word[i];
            }
            else{
                if (c==0){
                    t+=word[i];
                    int j=0;
                    int k=t.size()-1;
                    while(j<k){
                        char temp=t[j];
                        t[j]=t[k];
                        t[k]=temp;
                        j++;
                        k--;
                    }
                    c=1;
                }
                else{
                    t+=word[i];
                }
            }
        }
        return t;
    }
};