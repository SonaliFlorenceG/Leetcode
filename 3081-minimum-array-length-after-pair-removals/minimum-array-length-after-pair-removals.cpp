class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int ans=nums.size();
        int i=0;
        int j=nums.size()/2;
        while(j<nums.size() && i<nums.size()/2){
            if (nums[i]!=nums[j]){
                i++;
                j++;
                ans-=2;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};