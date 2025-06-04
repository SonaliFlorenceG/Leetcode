class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>u;
        for (int i=0; i<nums.size(); i++){
            u[nums[i]]+=1;
        }
        int m=0,ans=0;
        for (auto it :u){
            if (it.second>m){
                m=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};