class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int,int>m;
        for (int i=0; i<nums.size(); i++){
            m[nums[i]]+=1;
        }
        vector<int> a;
        for (auto it:m){
            a.push_back(it.first);
        }
        // for (int i=0; i<a.size(); i++){
        //     cout<<a[i]<<" ";
        // }
        sort(a.begin(),a.end());
        if (a.size()<3) return a[a.size()-1];
        else return a[a.size()-3];
        return 0;
    }
};