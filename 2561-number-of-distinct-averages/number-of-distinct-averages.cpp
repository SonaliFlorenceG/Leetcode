class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        unordered_map<float,int>a;
        while(i<j){
            float b= (nums[i]+nums[j])/2.0;
            a[b]+=1;
            i++;
            j--;
        }
        return a.size();
    }
};