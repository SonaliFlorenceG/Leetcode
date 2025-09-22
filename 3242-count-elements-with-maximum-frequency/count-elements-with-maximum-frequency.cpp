class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>a;
        for (int i=0; i<nums.size(); i++){
            int c=0;
            for (int j=0; j<nums.size(); j++){
                if (nums[i]==nums[j]){
                    c++;
                    cout<<c;
                }
            }
            a.push_back(c);
        }
        sort(a.begin(),a.end());
        int s=0;
        int m=a[a.size()-1];
        for (int i=0; i<a.size(); i++){
            if (a[i]==m){
                s++;
            }
        }
        return s;
    }
};