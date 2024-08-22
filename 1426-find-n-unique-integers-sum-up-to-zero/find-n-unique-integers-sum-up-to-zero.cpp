class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a;
        int t=1;
        for (int i=0; i<n/2; i++){
            a.push_back(t);
            a.push_back(t-(2*t));
            t++;
        }
        if (n%2==1){
            a.push_back(0);
        }
        return a;
    }
};