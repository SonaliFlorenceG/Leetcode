class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0, j=s.size()-1;
        while(i<j){
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
            j--;
            i++;
        }
    }
};